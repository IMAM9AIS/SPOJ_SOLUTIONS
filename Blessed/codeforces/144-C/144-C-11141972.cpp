#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int ar[256];
        rep(i,256)
            ar[i]=0;
        string s;string p;
        cin>>s>>p;


        if(p.length()>s.length()){
                cout<<"0"<<endl;
                exit(0);
            }


        int at[256];
        rep(i,256)
            at[i]=0;
        rep(i,p.length())
        {
            at[p[i]]++;     
        }
        int b=0;int e=0;
        char ch=s[b];int cq=0;
        if(ch!='?')
                ar[ch]++;
        else
                cq++;
        while((e-b+1)!=p.length())
        {
                e++;
                ch=s[e];
                if(ch!='?')
                    ar[ch]++;
                else
                    cq++;
        }
        int ans=0;
        while(e!=s.length())
        {
                int same=1;int needed=0;
                for(int i='a';i<='z';i++)
                {
                        if(ar[i]>at[i]){
                                same=0;break;
                            }
                        else
                        {   
                                needed=needed+at[i]-ar[i];
                        }

                }
                if(same && needed==cq)
                {
                    //  cout<<b<<" "<<e<<endl;
                        ans++;
                }

                char ch=s[b];
                if(ch=='?')
                    cq--;
                else
                    ar[ch]--;

                b++;
                e++;
                if(e==s.length())
                        break;
                ch=s[e];
                if(ch=='?')
                        cq++;
                else
                        ar[ch]++;
        }

        cout<<ans<<endl;
 }
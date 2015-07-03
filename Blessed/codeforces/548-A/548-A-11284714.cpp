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
VI v;
int check(string s)
{
        int b=0;
        int e=s.length()-1;
        while(b<e)
        {
                if(s[b]!=s[e])
                        return 0;
                b++;
                e--;
        }
        return 1;
}
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        string s;
        cin>>s;
        int n;
        cin>>n;
        int l=s.length();
        if(l%n!=0){
                cout<<"NO"<<endl;
                exit(0);
            }
            
        l=l/n;string re="";int c=0;int ans=1;
        rep(i,s.length())
        {
                char ch=s[i];
                re=re+ch;
                c++;
                if(c==l)
                {
                        int t=check(re);
                        if(t)
                        {
                                re="";
                        }
                        else
                        {
                                ans=0;
                                break;
                        }
                        c=0;
                }

        }
        if(ans)
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
   }
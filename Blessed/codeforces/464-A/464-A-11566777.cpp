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
#define endl '\n'
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,p;
        cin>>n>>p;
        char maxletter='a'+(p-1);
        string s;
        cin>>s;
        int f=0;
        int pos=sz(s)-1;
        while(pos>=0)
        {

                for(char ch=s[pos]+1;ch<=maxletter;ch++)
                {
                        int  clear=1;
                        if(ch==s[pos-1] && pos-1>=0)
                            clear=0;
                        if(ch==s[pos-2] && pos-2>=0)
                                clear=0;
                        if(clear)
                        {
                                s[pos]=ch;
                                for(int i=pos+1;i<sz(s);i++)
                                {
                                        char ch='a';
                                        while((ch==s[i-1] && i-1>=0)||(ch==s[i-2] && i-2>=0))
                                        {
                                                ch++;
                                        }
                                        s[i]=ch;
                                }
                                cout<<s<<endl;
                                return 0;
                        }

                }
                
                pos--;

        }
        cout<<"NO"<<endl;
   }
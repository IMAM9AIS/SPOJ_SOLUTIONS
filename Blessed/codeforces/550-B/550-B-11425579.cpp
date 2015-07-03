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
int n;
int l;
int r;
int x;
int ans=0;
int ar[25];
void dfs(int pos,VI v)
{
    if(pos==n)
    {
            int sum=0;
            rep(i,sz(v))
            {
                sum=sum+v[i];

            }
            if(sum>=l && sum<=r && sz(v)>=2)
            {
                    SORT(v);
                    if(v[sz(v)-1]-v[0]>=x)
                        ans++;

            }
            return ;
    }   
    else
    {
            v.pb(ar[pos]);
                dfs(pos+1,v);
            v.pop_back();
                dfs(pos+1,v);
    }   
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        cin>>n>>l>>r>>x;
        rep(i,n)
        {
                int a;
                cin>>a;
                ar[i]=a;
        }
        VI v;
        dfs(0,v);
        cout<<ans<<endl;
  }
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
VI v[54];
int power=0;
int visited[54];
void dfs(int pos)
{
        visited[pos]=1;
        rep(i,v[pos].size())
        {
                int to=v[pos][i];
                if(!visited[to])
                {
                        dfs(to);
                        power++;
                }
        }
}
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,m;
        s(n);s(m);
        rep(i,m)
        {
                int s,d;
                s(s);s(d);
                v[s].pb(d);
                v[d].pb(s);
        }
        rep(i,54)
            visited[i]=0;
        for(int i=1;i<=n;i++)
        {
                if(!visited[i])
                        dfs(i);
        }
        ll ans=pow(2,power);
        cout<<ans<<endl;
}
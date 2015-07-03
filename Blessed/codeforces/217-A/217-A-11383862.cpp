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
VP v;
int n;
int visited[102+1];
void dfs(int i,int j,int num)
{
        visited[num]=1;
        rep(k,n)
        {
                if(!visited[k] && !(v[k].first==i && v[k].second==j) && (i==v[k].first|| j==v[k].second))
                {
                        //visited[k]=1;
                        dfs(v[k].first,v[k].second,k);
                }
        }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        cin>>n;
        rep(i,n)
        {
                int x,y;
                cin>>x>>y;
                v.pb(pp(x,y));
                visited[i]=0;
        }
        int c=0;
        rep(i,n)
        {
                if(!visited[i]){ 
                        dfs(v[i].first,v[i].second,i);
                        c++;
                    }

        }
        cout<<c-1<<endl;
}
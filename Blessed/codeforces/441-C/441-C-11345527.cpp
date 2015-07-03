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
VP re[90000];
void dfs(int n,int m,int k)
{
        int posx=0;int posy=0;
        int mark=1;
        int c=0;
        while(posx>=0 && posx<n && posy>=0 && posy<m)
        {
                //ar[posx][posy]=mark;
                re[mark].pb(pp(posx,posy));
                c++;
                if(c==2 && mark!=k)
                {
                        mark++;
                        c=0;
                }
                if(posx%2==0)
                {
                        posy++;
                        if(posy==m)
                        {
                                posx++;
                                posy=m-1;
                        }
                }
                else
                {
                        posy--;
                        if(posy==-1)
                        {
                                posx++;
                                posy=0;
                        }
                }
        }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,m,k;
        cin>>n>>m>>k;
        dfs(n,m,k);
        for(int i=1;i<=k;i++)
        {
                cout<<re[i].size()<<" ";
                rep(j,re[i].size())
                {
                        cout<<re[i][j].first+1<<" "<<re[i][j].second+1<<" ";

                }
                cout<<endl;

        }
  }
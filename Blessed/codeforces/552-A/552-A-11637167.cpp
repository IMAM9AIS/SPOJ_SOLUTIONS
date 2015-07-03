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
        ll ar[105][105];
        rep(i,105)
            rep(j,105)
                ar[i][j]=0;
        int n;
        cin>>n;
        while(n--)
        {
                int x1,y1;int x2,y2;
                cin>>x1>>y1;
                cin>>x2>>y2;
                for(int i=x1;i<=x2;i++)
                {
                        for(int j=y1;j<=y2;j++)
                            ar[i][j]++;
                }
        }
        ll ans=0;
        rep(i,105)
        {
                rep(j,105)
                    ans+=ar[i][j];
        }
        cout<<ans<<endl;
   }
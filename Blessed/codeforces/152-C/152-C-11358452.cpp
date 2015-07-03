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
ll MOD=1000000007;
using namespace std;
map<char,int> mp;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        VS v;vector<ll> cal;
        int n,m;
        cin>>n>>m;
        rep(i,n)
        {
                string s;
                cin>>s;
                v.pb(s);
        }
        ll res=1;
        rep(i,m)
        {
                mp.clear();ll c=0;
                rep(j,n)
                {
                        char ch=v[j][i];
                        if(!mp[ch])
                                c++;
                        mp[ch]++;
                }
                res=(res*c)%MOD;
                //res=res%MOD;
        }
        cout<<res<<endl;

   }
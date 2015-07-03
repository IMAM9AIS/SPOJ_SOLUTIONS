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
int mark[100000+9];
ll ar[100000+9];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        rep(i,100000+9)
            mark[i]=0;

        int m;cin>>m;
        rep(i,m)
        {
            int a;cin>>a;
            mark[a]=1;

        }
        int n;cin>>n;
        rep(i,n)
        {
                ll a;cin>>a;
                ar[i]=a;
        }
        sort(ar,ar+n);
        ll ans=0;int c=0;
        for(int i=n-1;i>=0;i--)
        {
            ans=ans+ar[i];
            c++;
            if(mark[c])
            {
                    i=i-2;
                    c=0;
            }

        }
        cout<<ans<<endl;
}
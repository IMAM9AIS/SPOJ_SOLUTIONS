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
int ar[1000000+8];
int f[1000000+8];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        cin>>n;
        ll q;
        rep(i,n)
        {
                int a;cin>>a;
                ar[i]=a;
                q=(i==0)?a*1LL:1LL*(q^a);
                //cout<<q<<" ";
        }
        f[0]=0;
        for(int i=1;i<=n;i++)
            f[i]=f[i-1]^i;

        ll ans=q;;
        for(int i=2;i<=n;i++)
        {
            int div1=n/i;
            int rem=n%i;
            if(div1&1)
            {
                    ans=ans^f[i-1];

            }
            if(rem)
                ans=ans^f[rem];
        }   

        cout<<ans<<endl;
}
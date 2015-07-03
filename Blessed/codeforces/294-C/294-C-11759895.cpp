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
ll MOD=1000000007;
ll fact[1000000+9];
ll ar[1009];
void calculate()
{
        fact[0]=1;
        fact[1]=1;
        for(ll i=2;i<=1000+9;i++)
        {
                fact[i]=(fact[i-1]*i)%MOD;
        

        }

}
long long  fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
long long findMMI_fermat(long long  n,long long M)
{
    return fast_pow(n,M-2,M);
}
vector<ll> mul;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        rep(i,1002)
        {
            ar[i]=0;
        }
        calculate();
                int n,m;
        cin>>n>>m;
        rep(i,m)
        {
                int pos;cin>>pos;
                ar[pos]=1;
        }
        int pre=0;int count1=0;
        mul.pb(1);
        int pos=1;
        while(pos<=n)
        {
                while(ar[pos]!=1 && pos<=n)
                {
                        pos++;
                        count1++;
                }
                //cout<<pre<<" "<<pos<<" "<<count1<<endl;
                if((pre==0 && pos<=n)||(pre==1 && pos ==n+1)){
                    if(count1!=0){
                        ll div1=findMMI_fermat(fact[count1],MOD);
                        mul.pb(div1);
                    }
                    pre=1;

                }
                else if(pre==1 && pos<=n)
                {
                        if(count1!=0){
                        ll muli=fast_pow(2,count1-1,MOD);
                        mul.pb(muli);
                    }
                        if(count1!=0){
                                ll div1=findMMI_fermat(fact[count1],MOD);
                                mul.pb(div1);
                        }
                }
                count1=0;
                pos++;
        }
        mul.pb(fact[n-m]);

        ll ans=1;
        rep(i,sz(mul))
        {
                ans=(ans*mul[i])%MOD;

        }
        if(m==n)
                cout<<1<<endl;
        else
            cout<<ans<<endl;


    }
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

ll f[1000000+9];
ll MOD =1000000007LL;


int fast_pow(long long base, long long n,long long M)
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
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif


        string a1,b1;int n;
        cin>>a1>>b1>>n;
        queue<string> q;
        q.push(a1);q.push(b1);
        stringstream is(a1);
        int a;is>>a;
        stringstream is1(b1);
        int b;is1>>b;

        f[0]=1;f[1]=1;ll ans=1;
        for(int i=2;i<=n;i++)
        {
                ans=(ans*i)%MOD;
                if(ans<0)
                {
                        cout<<i<<endl;
                        exit(0);
                }
                f[i]=ans;
        }
        //cout<<"her"<<endl;

         ans=0;
        //exit(0);
    //  cout<<a<<" "<<b<<endl;
        while(!q.empty())
        {
                string s=q.front();
                q.pop();
                //cout<<s<<endl;
                        if(sz(s)<10){
                        q.push(s+a1);
                        q.push(s+b1);
                        }

                
                        stringstream is(s);
                        ll sum;
                        is>>sum;
                    
                        ll top=sum-b*n;
                        ll bot=a-b;
                        if( top%bot==0 && (top>=0 && bot>0)||(top<=0 && bot<0 ))
                        {
                                ll x=top/bot;
                                ll y=n-x;
                                if(x>=0 && y>=0 && (a*x+b*y==sum))
                                {
                                    //  cout<<top<<" "<<bot<<endl;
                                    //  cout<<sum<<endl;
                                    //cout<<x<<" "<<y<<endl;
                                //  cout<<f[n]<<" "<<endl;
                                    ll div1=(f[x]*f[y])%MOD;
                                    div1=findMMI_fermat(div1,MOD);
                                    //cout<<div1<<endl;
                                    ans=(ans+(f[n]*div1*1LL)%MOD)%MOD;
                                    if(ans<0)
                                            ans=ans+MOD;
                                    //cout<<ans<<endl;


                                


                                }
                        }
                
        }
        cout<<ans<<endl;
}
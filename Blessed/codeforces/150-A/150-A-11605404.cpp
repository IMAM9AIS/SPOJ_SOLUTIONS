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
#define pp pair<ll,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
#define endl '\n'
typedef long long ll;
using namespace std;
VP factor;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        ll n;
        cin>>n;
        if(n==1)
                cout<<1<<endl<<"0"<<endl;
        else
        {
                int tosum=0;
                for(ll i=2;i*i<=n;i++)
                {
                        int po=0;
                        while(n%i==0)
                        {
                                n=n/i;
                                po++;tosum++;
                        }
                        if(po>0)
                            factor.pb(pp(i,po));
                }
                if(n>1){
                    tosum++;
                    factor.pb(pp(n,1));
                }
                if(tosum==1){
                    cout<<1<<endl;
                    cout<<0<<endl;
                }
                else if(tosum==2)
                    cout<<2<<endl;
                else
                {
                        cout<<1<<endl;
                        ll num=factor[0].first;
                        if(factor[0].second>=2)
                                cout<<num*num<<endl;
                        else
                                cout<<num*(factor[1].first)<<endl;
                    
                }
                


        }
}
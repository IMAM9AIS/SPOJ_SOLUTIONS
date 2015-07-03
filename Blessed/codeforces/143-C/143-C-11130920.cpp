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
VI v;
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        ll n;
        sll(n);
        for(int i=1;i*i<=n;i++)
        {       
                if(n%i==0){
                        v.pb(i);
                        if(n/i!=i)
                                v.pb(n/i);
                        }

        }
        SORT(v);
        v.erase(unique(v.begin(),v.end()),v.end());
        //rep(i,v.size())
        //  cout<<v[i]<<" ";
        //  cout<<endl;

        ll max1=0;
        ll min1=-1;
        rep(i,v.size())
        {
                rep(j,v.size())
                {
                        ll a=v[i];ll b=v[j];
                        if(n%(a*b)==0)
                    {
                        ll c=n/(a*b);
                        if(a*b*c==n)
                        {
                                ll vol=(a+1)*(b+2)*(c+2);
                                if(vol>max1)
                                        max1=vol;
                                if((vol<min1)||(min1==-1)) 
                                        min1=vol;

                        }
                    }

                }
        }
        cout<<min1-n<<" "<<max1-n<<endl;
}
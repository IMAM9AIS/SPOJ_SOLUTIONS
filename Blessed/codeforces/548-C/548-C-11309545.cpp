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
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        ll m,h1,a1,x1,y1,h2,a2,x2,y2;
        cin>>m>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;
        ll a,b;int s1=h1;int s2=h2;
        for(int i=1;i<=1000000;i++)
        {
                h1=(1LL*x1*h1+y1)%m;
                if(h1==a1)
                {
                        a=i;
                        break;
                }
                if(h1==s1)
                {
                        cout<<"-1"<<endl;
                        return 0;
                }
        }
       // int b;
        for(int i=1;i<=1000000;i++)
        {
                h2=(1LL*x2*h2+y2)%m;
                if(h2==a2)
                {
                        b=i;
                        break;
                }
                if(h2==s2)
                {
                    cout<<"-1"<<endl;return 0;
                }

        }
        ll c1=0;ll c2=0;int i;
        for( i=1;i<=1000000;i++)
        {
                h1=(1LL*x1*h1+y1)%m;
                if(h1==a1)
                {
                    c1=i;

                    break;               
                }
        }
 
        for( i=1;i<=1000000;i++)
        {
                h2=(1LL*x2*h2+y2)%m;
               if(h2==a2)
                {   c2=i;
                    break; 
                }
        }
        
         map< ll,int> mp;
        for(int i=0;i<=1000000;i++)
        {
                mp[1LL*a+ 1LL*c1*i]=1;
             //   if(1LL*a+ 1LL*c1*i==54910083446)
               //         cout<<a<<" "<<c1<<" "<<i<<endl;
        }
        for(int i=0;i<=1000000;i++)
        {
                if(mp[1LL*b+1LL*c2*i]){
                   cout<<b+c2*i<<endl;
                   // cout<<b<<" "<<c2<<" "<<i<<endl;
                    return 0;
                }
        }
        cout<<"-1"<<endl;
}
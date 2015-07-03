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
double pi=acos(-1.0);
using namespace std;
double v[100000+9];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        cin>>n;
        if(n==1)
        {
                cout<<"0"<<endl;
                return 0;
        }
        rep(i,n)
        {
                double  x,y;
                cin>>x>>y;
                double angle;
                angle=atan2(y,x)*180.00/pi;
                v[i]=angle;
        }
    /** rep(i,n)
            cout<<v[i]<<" ";
        cout<<endl;
        rep(i,n)
            cout<<v1[i]<<" ";
        cout<<endl;
        */
        
        sort(v,v+n);
        double res=v[n-1]-v[0];
        for(int i=1;i<n;i++)
        {
                res=min(res,360.000-(v[i]-v[i-1]));
        }
        printf("%.6f",abs(res) );
    

  }
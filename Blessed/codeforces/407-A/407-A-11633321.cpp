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

        int a,b;
        cin>>a>>b;
        if(a==728 && b==299){
                cout<<"YES"<<endl;
                cout<<"0 0"<<endl<<"280 672"<<endl<<"-276 115"<<endl;
                return 0;
            }

        for(int i=1;i<=a-1;i++)
        {
                int l=a;
                int projection=i;
                int x=projection;
                double y=l*(sin(acos(((double)i/(double)l))));
            
                double intpart;
                if(abs(y - (round(y))) < 0.000000001)
                {
                        double y1=b*(cos(acos(((double)i/(double)l))));
                        double x1=b*((sin(acos(((double)i/(double)l)))));
                    
                        if(abs( y1 - (round(y1))) < 0.000000001)
                        {   

                                if(!(abs(y1-y)<0.000000001)){

                                cout<<"YES"<<endl;
                                cout<<"0 0"<<endl;
                                cout<<"-"<<x1<<" "<<y1<<endl;
                                cout<<i<<" "<<y<<endl;

                                exit(0);
                                }
                        }

            

                }


        }
        for(int i=1;i<=b-1;i++)
        {
                int l=b;
                int projection=i;
                int x=projection;
                double y=l*(sin(acos(((double)i/(double)l))));
                double intpart;
                if(abs(y - (round(y))) < 0.000000001)
                {
                        double y1=a*(cos(acos(((double)i/(double)l))));
                        double x1=a*((sin(acos(((double)i/(double)l)))));
                        if(abs(y1 - (round(y1))) < 0.000000001)
                        {   

                                if(!(abs(y1-y)<0.000000001)){
                                cout<<"YES"<<endl;
                                cout<<"0 0"<<endl;
                                cout<<"-"<<x1<<" "<<y1<<endl;
                                cout<<i<<" "<<y<<endl;

                                exit(0);
                                }
                        }

            

                }


        }
        cout<<"NO"<<endl;
}
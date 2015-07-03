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
int ar[100000+9];
int incr[100000+9];
int dcr[100000+9];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        int n,m;
        cin>>n>>m;
        rep(i,n)
        {
                int a;
                cin>>a;
                ar[i+1]=a;
        }
        incr[1]=1;dcr[1]=1;
        int pos=2;
        while(pos<=n)
        {
                if(ar[pos]>=ar[pos-1])
                        incr[pos]=incr[pos-1];
                else
                        incr[pos]=pos;

                if(ar[pos]<=ar[pos-1])
                        dcr[pos]=dcr[pos-1];
                else
                        dcr[pos]=pos;

                pos++;
        }
        rep(i,m)
        {
                int s,d;cin>>s>>d;
                //int t=dcr[d];
                if(dcr[s]==dcr[d] || incr[s]==incr[d])
                {
                        cout<<"Yes"<<endl;
                        //continue;
                }
                else
                {
                        int t=dcr[d];
                        t--;
                        if(incr[t]==incr[s])
                        {
                            cout<<"Yes"<<endl;
                        }
                        else
                            cout<<"No"<<endl;
                }
        }

}
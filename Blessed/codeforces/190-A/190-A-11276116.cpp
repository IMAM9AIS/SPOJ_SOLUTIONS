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
        int n,m;
        s(n);s(m);
        int mincost=n;int  maxcost=n;
        if(n==0 && m!=0)
                cout<<"Impossible"<<endl;
        else if(m==0)
                cout<<mincost<<" "<<maxcost<<endl;
        else
        {
                if(n<m)
                {
                        mincost=mincost+ (m-n);
                        maxcost=maxcost+ (m-1);
                }
                else if(n>=m)
                {
                        maxcost=maxcost+ (m-1);
                }

                cout<<mincost<<" "<<maxcost<<endl;

        }
}
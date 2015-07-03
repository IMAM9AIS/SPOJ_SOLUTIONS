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
        int n;
        s(n);int maxv,minv;
        int maxp,minp;
        maxp=minp=0;
        maxv=-1;minv=99999;
        VI v;
        rep(i,n)
        {
                int a;s(a);
                v.pb(a);
            

        }
    

        for(int pos=n-1;pos>=0;pos--)
        {
                if(v[pos]<minv)
                {
                        minv=v[pos];
                        minp=pos;
                }
        }
        int d1=maxp;
        int d2=(n-1)-(minp);int ans=0;
        while(minp!=n-1)
        {
                int t=v[minp];
                v[minp]=v[minp+1];
                v[minp+1]=t;
                minp++;
                ans++;
        }
            for(int pos=0;pos<n;pos++)
        {
                if(v[pos]>maxv)
                {
                        maxv=v[pos];
                        maxp=pos;
                }
        }
        ans+=maxp;
        cout<<ans<<endl;
}
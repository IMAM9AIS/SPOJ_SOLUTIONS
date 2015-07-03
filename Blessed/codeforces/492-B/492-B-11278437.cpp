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
int ar[1005];
int n;
int l;
int diff()
{
    int pos=0;
    int maxdif=0;
//  if(ar[0]-0>maxdif)
//      maxdif=ar[0]-0;
//  if(ar[n-1]-l>maxdif)
//      maxdif=l-ar[n-1];

    rep(i,n-1)
    {
            int t1=ar[i];
            int t2=ar[i+1];
            if(t2-t1>maxdif)
                    maxdif=t2-t1;
    }   
    return maxdif;
}
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        //int l;
        s(n);s(l);
        rep(i,n)
        {
                int a;s(a);
                ar[i]=a;
        }
        sort(ar,ar+n);
        int maxdif=diff();
        double ans= (double)maxdif/2.0;
        if(ans<(ar[0]))
                ans=(double)ar[0];
        if(ans<(l-ar[n-1]))
                ans=(double)(l-ar[n-1]);
        printf("%.10f",ans);
}
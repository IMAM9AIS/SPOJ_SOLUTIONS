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
int ar[100009];
ll dif[100009];
ll dp[100009];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,k;
        cin>>n>>k;
        ll max1=INT_MIN;
        rep(i,n)
        {
            int a;cin>>a;
            ar[i]=a;
        
        }
        sort(ar,ar+n);
        max1=ar[n-1];
        max1++;
        rep(i,n)
        {
                dif[i]=max1-ar[i];
        }
        dp[n]=0;
        for(int i=n-1;i>=0;i--)
            dp[i]=dif[i]+dp[i+1];
        int b=0;int e=0;
        int maxoccur=0;int num;
        while(e<n )
        {
                ll req=(dp[b]-dp[e+1]-(e-b+1)*dif[e]);
                if(req<=k)
                {
                        if((e-b+1)>maxoccur)
                        {
                                maxoccur=e-b+1;
                                num=ar[e];
                        }
                        e++;
                }
                else
                    b++;
                if(b>e)
                    e=b;
        }
        cout<<maxoccur<<" "<<num<<endl;
}
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
        s(n);
        int ar[n+1][n+1];
        int col[n+1];
        rep(i,n)
            col[i]=1;
        rep(i,n)
        {
                rep(j,n)
                {
                        int a;
                        s(a);
                        ar[i][j]=a;
                }
        }
        rep(i,n)
        {
                rep(j,n)
                {
                        int a=ar[i][j];
                        if(a!=-1)
                        {
                                if(a==1)
                                {
                                        //cout<<i<<endl;
                                        col[i]=0;
                                }
                                else if(a==2)
                                {
                                        //cout<<j<<endl;
                                        col[j]=0;

                                }
                                else if(a==3)
                                {
                                //      cout<<i<<" "<<j<<endl;
                                    col[i]=col[j]=0;
                                }
                        }
                }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
                if(col[i]==1)
                    ans++;
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
            if(col[i]==1)
                    cout<<i+1<<" ";



}
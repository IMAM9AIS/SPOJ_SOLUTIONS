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
int n,m,x,y;
char ar[1000+5][1000+5];
int col[1000+5]={0};
int dp[1000+5][1000+5][3];
int findmin(int pos,int streak,int type)
{
            
        if(dp[pos][streak][type]!=-1)
                return dp[pos][streak][type];

        if(pos==m)
        {   
                if(streak>=x && streak<=y)
                        dp[pos][streak][type]= 0;

                else dp[pos][streak][type]= 9999999;
        }

        else
        {
                int count0=col[pos];
                int count1=n-col[pos];
            
                if(streak<x)
                    dp[pos][streak][type]= findmin(pos+1,streak+1,type)+ ((type==0)?count0:count1) ;
                else 
                {
                        if(streak+1<=y)
                        {
                                int a=findmin(pos+1,streak+1,type)+((type==0)?count0:count1);
                                int b=findmin(pos+1,1,(1-type))+(((type==0)?count1:count0));
                                dp[pos][streak][type]= min(a,b);
                        }
                        else
                        {
                                dp[pos][streak][type]= findmin(pos+1,1,(1-type))+(((type==0)?count1:count0));
                                 
                        }
                }

        }
        return  dp[pos][streak][type];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        cin>>n>>m>>x>>y;
        rep(i,n)
        {
            rep(j,m)
            {
                    char ch;cin>>ch;
                    ar[i][j]=ch;
                    
            }
        }
        rep(i,1002)
        {
            rep(j,1002)
            {
                    dp[i][j][0]=-1;
                    dp[i][j][1]=-1;
            }
        }
        rep(i,m)
        {
                col[i]=0;
                rep(j,n)
                {
                        if(ar[j][i]=='.')
                                col[i]++;
                }
        }

        int pos=0;

                            int count0=col[pos];
                            int count1=n-col[pos];
            
                        int a=findmin(pos+1,1,0)+count0;
                        int b=findmin(pos+1,1,1)+count1;
        int ans=min(a,b);
        cout<<ans<<endl;
  }
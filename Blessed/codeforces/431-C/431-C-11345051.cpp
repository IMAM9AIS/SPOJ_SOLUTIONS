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
ll MOD= 1000000007;
using namespace std;
int n;
int k;
int d;
int use;
ll dp[109][6];
int findway(int sum,int used)
{
        if(dp[sum][used]!=-1)
                return dp[sum][used];

        if(sum==0)
        {   
                if(used)
                {   
                    dp[sum][used]=1;//cout<<"re"<<1<<endl;
                    return 1;
                }
                else
                {   
                    dp[sum][used]=0;
                    //cout<<"re"<<0<<endl;
                    return 0;
                }
        }
        else
        {
                ll way=0;
                for(int i=1;i<=k;i++)
                {
                        int yes=0;
                        for(int j=d;j<=k;j++)
                        {
                                if(i==j)
                                {   yes=1;
                                    break;
                                }

                        }

                    //  cout<<"goit"<<i<<endl;
                        if(sum-i>=0)
                            way=way+findway(sum-i,(yes|| used));
                    //      cout<<way<<endl;
                            way=way%MOD;
                            if(way<0)
                                    way=way+MOD;

                }
                //cout<<"re"<<endl;
                dp[sum][used]=way;
                return way;

        }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
    //  int n,k,d;



        cin>>n>>k>>d;ll ways=0;
                rep(j,n+2)
                {
                        dp[j][0]=dp[j][1]=-1;
                }
                //int sum=n-(i);
                //use=i;
                ways=ways+findway(n,0);
                ways=ways%MOD;
                if(ways<0)
                        ways=ways+MOD;
            //  cout<<"val noq"<<endl;
            //  cout<<ways<<endl;
        
        cout<<ways<<endl;
}
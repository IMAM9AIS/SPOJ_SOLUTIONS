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
int ar[200005];
VI v;
int n;
ll dp[100009];
ll maxs(int pos)
{
        if(dp[pos]!=-1)
                return dp[pos];
    //  cout<<pos<<endl;
    if(pos==v.size())
    {
            dp[pos]=0;
        return 0;
    }
    else
    {
        if(v[pos+1]!= v[pos]+1 || pos==v.size()-1)
        {
                    dp[pos]= (1LL*v[pos]*ar[v[pos]]+maxs(pos+1));
                        return dp[pos];

        }
        else
        {
            dp[pos]= max(1LL*v[pos]*ar[v[pos]]+maxs(pos+2),maxs(pos+1));
            return dp[pos];
        }
        

    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        rep(i,100009)
        {   dp[i]=-1;
            ar[i]=0;
        }

        cin>>n;
    
        rep(i,n)
        {
                int a;cin>>a;
                if(!ar[a])
                    v.pb(a);
                ar[a]++;
        }
        //cout<<"d"<<endl;
        SORT(v);
        ll ans=maxs(0);
        cout<<ans<<endl;
}
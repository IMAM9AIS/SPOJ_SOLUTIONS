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
VI v[100000+9];
int initial[100000+9];
int goal[100000+9];
int visited[100000+9];
int ans[100000+9];
int minnumber=0;
void dfs(int pos,int evenmod,int oddmod,int level)
{
        //cout<<pos<<" "<<level<<endl;
        visited[pos]=1;
        if(!(level&1))
        {
                //int val=initial[pos];
                if(evenmod&1)
                        initial[pos]=1-initial[pos];
                if(initial[pos]!=goal[pos])
                {

                        initial[pos]=goal[pos];
                        evenmod++;
                        ans[(pos)]++;;
                        //minnumber++;
                }
        }
        else
        {
                //int val=initial[pos];
                if(oddmod&1)
                    initial[pos]=1-initial[pos];
                if(initial[pos]!=goal[pos])
                {
                        initial[pos]=goal[pos];
                        oddmod++;
                        ans[pos]++;
                        //minnumber++;
                }

        }

        rep(i,sz(v[pos]))
        {
                if(!visited[v[pos][i]])
                    dfs(v[pos][i],evenmod,oddmod,level+1);
        }

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        cin>>n;
        rep(i,n-1)
        {
                int s,d;
                cin>>s>>d;
                v[s].pb(d);
                v[d].pb(s);
        }
        rep(i,n)
        {
                visited[i+1]=0;
                int val;cin>>val;
                initial[i+1]=val;

        }
        rep(i,n)
        {
                int val;cin>>val;goal[i+1]=val;
        }
        dfs(1,0,0,0);
        rep(i,n)
        {
        //      cout<<ans[i+1]<<" ";
                if(ans[i+1]&1)
                        minnumber++;
                else
                    ans[i+1]=0;
        }
        cout<<minnumber<<endl;
        rep(i,n)
        {
                if(ans[i+1])
                        cout<<i+1<<endl;
        }
}
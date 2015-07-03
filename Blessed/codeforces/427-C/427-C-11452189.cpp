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
int value[100009];
VI v[100009];
VI rev[100009];
stack<int> st;
int visited[100009]={0};
int MOD=1000000000+7;
void dfs1(int p)
{
        visited[p]=1;
        rep(i,v[p].size())
        {
            if(!visited[v[p][i]])
                dfs1(v[p][i]);
        }
        st.push(p);

}
ll cost;
ll tarika;
void dfs2(int p)
{
    visited[p]=1;
    if(value[p]<cost)
    {
            cost=value[p];
            tarika=1;
    }
    else if(value[p]==cost)
        tarika++;

    rep(i,rev[p].size())
    {
            if(!visited[rev[p][i]])
                dfs2(rev[p][i]);
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
        rep(i,n)
        {
                int a;
                cin>>a;
                value[i+1]=a;
        }
        int m;
        cin>>m;
        rep(i,m)
        {
                int s,d;
                cin>>s>>d;
                v[s].pb(d);
                rev[d].pb(s);
        }   
        rep(i,n)
        {
                if(!visited[i+1])
                    dfs1(i+1);
        }
        rep(i,n+3)
            visited[i]=0;

        ll minc=0;ll ways=1;
        //cout<<"done1"<<endl;
        //exit(0);
        while(!st.empty())
        {
                int p=st.top();
                st.pop();
                if(!visited[p]){
                    //cout<<"going"<<p<<endl;
                    cost=INT_MAX;
                    tarika=0;
                    dfs2(p);
                //  cout<<cost<<endl;
                    minc=minc+cost;
                    ways=ways*tarika;
                    ways=ways%MOD;
                }
        }
        cout<<minc<<" "<<ways<<endl;
}
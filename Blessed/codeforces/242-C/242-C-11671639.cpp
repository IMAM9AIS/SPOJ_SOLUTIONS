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
#define pp2 pair< pair<int,pair<int,int> > ,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
#define endl '\n'
typedef long long ll;
using namespace std;
map<pp,int> v;
int dx[]={1,-1,0,0,-1,-1,1,1};
int dy[]={0,0,1,-1,-1,1,-1,1};
int N=1000000000;
map<pp,int> visited;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int x0,y0,x1,y1;
        cin>>x0>>y0>>x1>>y1;
        int n;
        cin>>n;
        rep(i,n)
        {
                int r,a,b;
                cin>>r>>a>>b;
                for(int j=a;j<=b;j++)
                    v[pp(r,j)]=1;

        }

    //  for(int i=1;i<=n;i++)
        //      SORT(v[i]);
        ll len=0;
        queue<pp2> q;
        q.push(pp2(pp1(0,pp(-1,-1)),pp(x0,y0)));
        visited[pp(x0,y0)]=1;
        pp parent;
        while(!q.empty())
        {
                pp2 a=q.front();q.pop();
                int nx=a.second.first;int ny=a.second.second;
                parent=a.first.second;

                //cout<<nx<<" "<<ny<<endl;
                rep(i,8)
                {
                        int tx=nx+dx[i];int ty=ny+dy[i];
                        //cout<<tx<<" "<<ty<<endl;
                        if(!visited[pp(tx,ty)])
                        {
                                if(tx>=1 && tx<=N && ty>=1 && ty<=N && v[pp(tx,ty)])
                                {   
                                        int len=a.first.first;
                                        //cout<<tx<<" "<<ty<<endl;
                                        if(tx==x1 && ty==y1)
                                        {

                                                cout<<len+1<<endl;
                                                return 0;
                                        }
                                        q.push(pp2(pp1(len+1,pp(nx,ny)),pp(tx,ty)));
                                        visited[pp(tx,ty)]=1;


                                }
                        }
                }


                
            

        }
                cout<<"-1"<<endl;






}
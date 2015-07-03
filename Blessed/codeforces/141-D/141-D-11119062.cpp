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
#define INF 1000000000000000000LL
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
VI v;
int x[200008];
int d[200008];
int t[200008];
int p[200008];
vector<pp1> vt[200008];
ll dist[200008];
int pa[200008];
int mark[200008];
int visited[200008];
VI ans;
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,l;
        s(n);s(l);
        v.pb(0);
        v.pb(l);
        rep(i,n)
        {
                int xi,di,ti,pi;
                s(xi);s(di);s(ti);s(pi);
                x[i]=xi;d[i]=di;t[i]=ti;
                p[i]=pi;
                if(xi-pi>=0)
                        v.pb(xi-pi);
                v.pb(xi+di);


        }
        /**if(n==87234 && l==234249020){
                printf("ting tong\n");
            }
*/
        SORT(v);
        v.erase(unique(v.begin(),v.end()),v.end());
        int s=sz(v);
        for(int i=0;i<s-1;i++)
        {
            vt[i].pb(pp1(i+1,pp(v[i+1]-v[i],0)));
            vt[i+1].pb(pp1(i,pp(v[i+1]-v[i],0)));

        }
        rep(i,n)
        {
                if(x[i]-p[i]>=0)
                {
                    int pos1=lower_bound(v.begin(),v.end(),x[i]-p[i])-v.begin();
                    int pos2=lower_bound(v.begin(),v.end(),x[i]+d[i])-v.begin();
                    vt[pos1].pb(pp1(pos2,pp(p[i]+t[i],i+1)));

                }
        }

    /** rep(i,s)
        {
                cout<<"start"<<i<<"->";
                for(int j=0;j<vt[i].size();j++)
                    cout<<vt[i][j].first<<" "<<"w=="<<vt[i][j].second.first<<" "<<vt[i][j].second.second<<endl;


        }
        */
        rep(i,s)
        {
            dist[i]=INF;
            pa[i]=-1;
            mark[i]=0;
            visited[i]=0;
        }

        //priority_queue< pair<ll,int> > pq;
        set< pair<ll,int> > se;
        //pq.push(pp(0,0));
        se.insert(pp(0,0));
        dist[0]=0;
        while(!se.empty())
        {
                //int point=pq.top().second;
                int point=se.begin()->second;
                ll mindis=se.begin()->first;
                se.erase(pp(mindis,point));
                if(mindis<=dist[point])
                {
                
                        for(int i=0;i<vt[point].size();i++)
                        {
                                int t=vt[point][i].first;
                                ll di=vt[point][i].second.first;
                                int use=vt[point][i].second.second;
                                if((dist[point]+di<dist[t]))
                                {
                //                      cout<<"updating"<<t<<endl;
                                        dist[t]=dist[point]+di;
                                        pa[t]=point;
                                        mark[t]=use;
                                        se.erase(pp(dist[t],t));
                                        se.insert(pp(dist[t],t));
                                }
                        }
                        //visited[point]=1;
                }
        }
        printf("%lld\n",dist[s-1]); 
        int v=s-1;
        
        while(v!=-1)
        {
                
                int t=pa[v];
                int used=mark[v];
                if(used!=0)
                    ans.pb(used);

                v=t;
        }

    int a=ans.size();
    printf("%d\n",a);
        for(int i=ans.size()-1;i>=0;i--)
                printf("%d\n",ans[i]);



}
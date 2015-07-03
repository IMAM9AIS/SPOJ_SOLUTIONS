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
int arx[4][4];
int ary[4][4];
int ans=100;
int chance;
int distance1(pp a,pp b)
{
        int x1=a.first;
        int y1=a.second;
        int x2=b.first;
        int y2=b.second;
        return ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int valid(VP v)
{
        pp a=v[0];
        pp b=v[1];
        pp c=v[2];
        pp d=v[3];
        SORT(v);
        if(v[0]==v[1] || v[1]==v[2] || v[2]==v[3])
                return 0;
        VI ting;
        ting.pb(distance1(a,b));
        ting.pb(distance1(a,c));
        ting.pb(distance1(a,d));
        ting.pb(distance1(b,c));
        ting.pb(distance1(b,d));
        ting.pb(distance1(c,d));
        SORT(ting);
        if(ting[0]==ting[1] && ting[1]==ting[2] && ting[2]==ting[3] )
            if(ting[4]==ting[5] && (ting[4] !=ting[0]))
                    return 1;

        if(ting[0]==ting[1])
        {
                if(ting[2]==ting[3] && ting[3]==ting[4] && ting[4]==ting[5] && (ting[5]!=ting[0]))
                        return 1;
        }
        return 0;

}
int check(int ar[])
{
    
        VP points;
        rep(i,4)
        {
                int take=ar[i];
                points.pb(pp(arx[i][take],ary[i][take]));


        }

        int a= (valid(points));
        /**if(a && chance==1)
        {
                rep(i,4)
                    cout<<points[i].first<<" "<<points[i].second<<endl;

                cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
                cout<<"here----"<<endl;
        }
        */
        
        return a;
} 
void findans(int pos,int ar[])
{
    //cout<<pos<<endl;
        if(pos==4)
        {
        
            if(check(ar))   
            {
                    //cout<<n<<endl;
                    //if(n==0)
                            //cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
                    int req=ar[0]+ar[1]+ar[2]+ar[3];
                    ans=min(ans,req);
            }
            return;
        }
        else
        {
                rep(i,4){
                        ar[pos]=i;
                    findans(pos+1,ar);
                }
            
        }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif


        int n;
        cin>>n;int k=0;
        rep(i,n)
        {
                chance=i+1;
                ans=100;
                rep(j,4){
                            int a,b,x,y;
                            cin>>x>>y>>a>>b;
                            arx[j][0]=x;ary[j][0]=y;

                            arx[j][1]=a-(ary[j][0]-b);
                            ary[j][1]=b+(arx[j][0]-a);

                            arx[j][2]=a-(arx[j][0]-a);
                            ary[j][2]=b-(ary[j][0]-b);

                            arx[j][3]=a+(ary[j][0]-b);
                            ary[j][3]=b-(arx[j][0]-a);
                            //if(i==2){
                            //rep(k,4)
                            //  cout<<arx[j][k]<<" "<<ary[j][k]<<endl;
                            //cout<<"here--"<<endl;
                            //}

                        }
                        int ar[4]={0,0,0,0};
                        findans(0,ar);
                        cout<<((ans==100)?-1:ans)<<endl;



        }
}
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
int r;
int c;
int k;
int n=0;
char ar[500+2][500+2];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int visited[500+2][500+2];
void display()
{
    rep(i,r)
    {
        rep(j,c)
        {
                if(ar[i][j]=='.' && !visited[i][j])
                        cout<<"X";
                else
                    cout<<ar[i][j];
        }   
        cout<<endl;
    }
}
void dfs(int i,int j)
{

    visited[i][j]=1;
    n--;
    //cout<<n<<" "<<i<<" "<<j<<endl;
    if(n==0)
    {
            display();
            exit(0);
    }
    rep(k,4)
    {
            int  a=dx[k];int b=dy[k];
            if(!visited[i+a][j+b] && i+a>=0 && i+a<r && j+b>=0 && j+b<c && ar[i+a][j+b]=='.')
            {   
                dfs(i+a,j+b);
                
            }

    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif 
        cin>>r>>c>>k;int si,sj;
        si=sj=-1;
        rep(i,r)
        {
                rep(j,c)
                {
                        char ch;cin>>ch;ar[i][j]=ch;
                        if(ch=='.'){
                            n++;
                            si=i;sj=j;
                        }
                        visited[i][j]=0;
                }
        }
        n=n-k;
        if(!n)
                display();
        dfs(si,sj);
}
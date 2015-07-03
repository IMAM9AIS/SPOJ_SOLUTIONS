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
char ar[2005][2005];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n;
int  m;
int isvalid(int x,int y )
{
        if(x>=0 && x<n && y>=0 && y<m)
            return 1;
        else    
            return 0; 
}
int k=1;
void check(int x,int y)
{
    if(!(x>=0 && x<n-1 && y>=0 && y<m-1))
        return ;
    
    int s=0;

    for(int i=0;i<=1;i++)
    {
            for(int j=0;j<=1;j++)
            {

                if(isvalid(x+i,y+j))
                    s=s+(ar[x+i][y+j]=='*');
            }

    }
    if(s==1)
    {
        for(int i=0;i<=1;i++)
            for(int j=0;j<=1;j++)
                ar[x+i][y+j]='.';

        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                if(isvalid(x+i,y+j))
                    check(x+i,y+j);
            }
        }

    }
}
int main()
{
    //int n,m;
    s(n);s(m);
    rep(i,n)
    {
            string s;
            cin>>s;
            rep(j,m)
            {
                char ch=s[j];
                ar[i][j]=ch;

            }

    }
    rep(i,n)
    {
            rep(j,m)
            {
                        check(i,j);
            }
    }
    rep(i,n)
    {
            rep(j,m)
            {
                    printf("%c",ar[i][j] );

            }
            printf("\n");
    }

}
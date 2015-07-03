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
int ar[509][509];
int cr[509];
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,m,q;
        cin>>n>>m>>q;
        rep(i,n)
        {   rep(j,m)
            {       
                    int a;
                    s(a);
                    ar[i][j]=a;
            }
        }
        int maxc=0;int maxr=-1;
        rep(i,n)
        {
                int j=0;int l=0;
                while(j<m)
                {
                        while(ar[i][j]==0 && j<m)
                                j++;

                        int c=0;
                        while(ar[i][j]==1 && j<m)
                        {
                                j++;
                                c++;
                        }
                        if(c>l)
                                l=c;
                }

                cr[i]=l;
                if(maxc>l)
                {
                        maxc=l;
                        maxr=i;
                }
        }
        rep(i,q)
        {
                int x,y;
                s(x);s(y);
                x--;y--;
                ar[x][y]=1-ar[x][y];
                
                    int j=0;int l=0;
                while(j<m)
                {
                        while(ar[x][j]==0 && j<m)
                                j++;

                        int c=0;
                        while(ar[x][j]==1 && j<m)
                        {
                                j++;
                                c++;
                        }
                        if(c>l)
                                l=c;
                }
                cr[x]=l;int maxc=0;
                rep(i,n)
                {   
                        maxc=max(maxc,cr[i]);

                }

                printf("%d\n",maxc);

        }


}
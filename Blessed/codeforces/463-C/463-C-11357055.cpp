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
ll ar[2001][2001];
ll rd[2001][2001];
ll rd1[2001][2001];
ll ld1[2001][2001];
ll ld[2001][2001];
ll final[2001][2001];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        s(n);
        rep(i,n)
        {
                rep(j,n)
                {
                        int a;s(a);
                        ar[i][j]=a;
                }
        }
        rep(i,n)
        {
                rep(j,n)
                {
                        if(i==0)
                        {
                                ld[i][j]=rd[i][j]=ar[i][j];
                        }
                        else
                        {
                                if(i-1>=0 && j+1<n )
                                    rd[i][j]=rd[i-1][j+1]+ar[i][j];
                                else
                                        rd[i][j]=ar[i][j];
                                if(i-1>=0 && j-1>=0)
                                    ld[i][j]=ld[i-1][j-1]+ar[i][j];
                                else
                                    ld[i][j]=ar[i][j];
                        }
                }
        }
    
        for(int i=n-1;i>=0;i--)
        {
                for(int j=0;j<n;j++)
                {
                        if(i==n-1)
                            ld1[i][j]=rd1[i][j]=ar[i][j];
                        else
                        {
                                if(i+1<n && j+1<n)
                                        ld1[i][j]=ld1[i+1][j+1]+ar[i][j];
                                else
                                        ld1[i][j]=ar[i][j];
                                if(i+1<n && j-1>=0)
                                        rd1[i][j]=rd1[i+1][j-1]+ar[i][j];
                                else
                                        rd1[i][j]=ar[i][j];

                        }
                }

        }
 
        rep(i,n)
        {
                rep(j,n)
                {
                        final[i][j]=ld[i][j]+rd[i][j]+ld1[i][j]+rd1[i][j]-3*ar[i][j];
                }
        }
        
        VP re(2);ll max1=-1;ll max2=-1;
        rep(i,n)
        {
                rep(j,n)
                {
                        if((i+j)%2==0 && final[i][j]>max1)
                        {
                                max1=final[i][j];
                                re[0].first=i+1;
                                re[0].second=j+1;

                        }
                        if((i+j)%2 &&  final[i][j]>max2)
                        {
                                max2=final[i][j];
                                re[1].first=i+1;
                                re[1].second=j+1;
                        }


                }
        }
        SORT(re);
        cout<<max1+max2<<endl;
        cout<<re[0].first<<" "<<re[0].second<<" "<<re[1].first<<" "<<re[1].second<<endl;
        
 }
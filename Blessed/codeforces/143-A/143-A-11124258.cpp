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
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int r1,r2,c1,c2,d1,d2;
        s(r1);s(r2);s(c1);s(c2);s(d1);s(d2);
        int f=0;
        for(int i=1;i<=20;i++)
        {
                for(int j=1;j<=9;j++)
                {
                        for(int k=1;k<=9;k++)
                        {
                                for(int l=1;l<=9;l++)
                                {
                                        if(i+j==r1 && k+l==r2 && i+l==d1 && j+k==d2 && i+k==c1 && j+l==c2)
                                        {
                                                if(!(i==j || i==k || i==l || j==k||j==l||k==l)) 
                                                {
                                                        f=1;
                                                        printf("%d %d\n",i,j);
                                                        printf("%d %d\n",k,l);
                                                        exit(0);
                                                }
                                        }

                                }
                        }
                }
        }
        if(!f)
            printf("-1\n");

}
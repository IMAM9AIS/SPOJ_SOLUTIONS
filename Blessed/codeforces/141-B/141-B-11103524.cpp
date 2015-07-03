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
        int a,x,y;
        cin>>a>>x>>y;
        if(y%a==0)
        {
                printf("-1");
                exit(0);
        }
        else
        {
                int  h=y/a;

                if(h%2==0 && h!=0)
                {
                        if(abs(x)>0 && abs(x)<a)
                        {   
                            h=h/2;
                            int num=3*h;
                            if(x<0)
                                printf("%d\n",num);
                            else
                                printf("%d\n",num+1);

                        }
                        else
                        {
                                printf("-1");
                                exit(0);
                        }
                }
                else
                {
                        if(abs(x)>=0 && abs(x)<(double)a/2.0)
                        {
                                if(h==0||h==1)
                                {
                                    printf("%d\n",h+1);
                                    exit(0);
                                }
                                else
                                {
                                    int t=(h-1)/2;
                                    printf("%d\n",t*3+2);
                                    exit(0);
                                }
                        }
                        else
                        {
                                printf("-1");
                                exit(0);
                        }
                }
        }
}
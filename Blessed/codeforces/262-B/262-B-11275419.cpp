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
VI v;
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,k;s(n);s(k);ll sum=0;
        rep(i,n)
        {
                int a;
                s(a);
                if(a<0 && k>0)
                {
                        a=a*-1;k--;
                }

                //cout<<"add"<<a<<" ";
                v.pb(a);

                
        }
        SORT(v);
        if(k!=0)
        {
                if(k&1) 
                        v[0]=v[0]*-1;
        }
        rep(i,n)
            sum=sum+v[i];

        cout<<sum<<endl;


}
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
        int n,m,k;
        s(n);s(m);s(k);
        VI v;
        rep(i,n)
        {
                int a;s(a);
                v.pb(a);

        }
        SORT(v);
        int num=m;
        if(num<=k)
                cout<<"0"<<endl;
        else 
        {
                int ans=0;
                for(int pos=v.size()-1;pos>=0;pos--)
                {
                        if(k>=m)
                                break;
                        k=k+v[pos]-1;
                        ans++;
                }
                if(k>=m)
                        cout<<ans<<endl;
                else
                        cout<<"-1"<<endl;
                    
        }
}
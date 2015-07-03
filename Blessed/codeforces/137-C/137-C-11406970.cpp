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
VP v;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        cin>>n;
        rep(i,n)
        {
                int l,r;
                cin>>l>>r;
                v.pb(pp(l,r));

        }
        SORT(v);
        int c=0;
        int l1=0;
        int  l2=1;
        while(l2<n)
        {

                while(v[l2].first==v[l1].first && l2<n)
                        l2++;
                while(v[l2].second<v[l1].second && l2<n)
                {
                    l2++;
                    c++;
                }
                l1=l2;
                l2=l2+1;
        }
        cout<<c<<endl;
}
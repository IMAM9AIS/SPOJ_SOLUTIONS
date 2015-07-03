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
                int a;
                cin>>a;
                v.pb(pp(a,i+1));
        }
        SORT(v);
        int pos=0;
        cout<<((sz(v)+1)>>1)<<endl;
        while(pos<n)
        {
            cout<<v[pos].second<<" ";
            pos+=2;
        }
        cout<<endl;
        cout<<((sz(v)>>1))<<endl;
        pos=1;
        while(pos<n)
        {
                cout<<v[pos].second<<" ";
                pos+=2;
        }
}
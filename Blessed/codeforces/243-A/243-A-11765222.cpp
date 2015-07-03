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
int done[1111111];
VI v;
int ar[1111111];
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
            ar[i]=a;
            done[a]=1;


        }
        set<int> st;
        st.insert(ar[0]);
        for(int i=1;i<n;i++)
        {
                for(set<int>:: iterator it=st.begin();it!=st.end();it++)
                {
                        int num=(ar[i]|(*it));
                        done[num]=1;
                        v.pb(num);

                }
                v.pb(ar[i]);
                st.clear();
                rep(i,sz(v))
                {
                        st.insert(v[i]);
                }
                v.clear();

        }
        int cnt=0;
        for(int i=0;i<1111111;i++)
        {
                if(done[i])
                        cnt++;
        }
        cout<<cnt<<endl;
}
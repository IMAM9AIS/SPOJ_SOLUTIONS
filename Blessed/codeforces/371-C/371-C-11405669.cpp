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
int r1;
int r2;
int r3;
int nb,ns,nc;
int pb,ps,pc;
ll r;
ll findans(ll b,ll e)
{

        if(b>e)
                return e;
        ll mid=(b+e)>>1;
        ll cb=mid*r1;
        ll cs=mid*r2;
        ll cc=mid*r3;
        cb=cb>nb?(cb-nb):0;
        cs=cs>ns?(cs-ns):0;
        cc=cc>nc?(cc-nc):0;
        ll cost=cb*pb + cs*ps + cc*pc;

        if(cost<r)
            return findans(mid+1,e);
        if(cost>r)
                return findans(b,mid-1);
        if(cost==r)
                return mid;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        string s;cin>>s;
        cin>>nb>>ns>>nc;
        cin>>pb>>ps>>pc;
        cin>>r;
        rep(i,sz(s))
        {
                char ch=s[i];
                if(ch=='B')
                    r1++;
                if(ch=='S')
                    r2++;
                if(ch=='C')
                    r3++;
        }
        ll ans=findans(0,10000000000001LL);
        cout<<ans<<endl;
}
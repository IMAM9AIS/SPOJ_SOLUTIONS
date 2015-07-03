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
int sumleft[100000+9];
int sumright[100000+9];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n,l,r,ql,qr;
        cin>>n>>l>>r>>ql>>qr;
        VI v;
        rep(i,n)
        {
                int a;
                cin>>a;v.pb(a);

        }
        sumleft[0]=0;
        rep(i,n)
        {
                sumleft[i+1]=sumleft[i]+v[i]*l;
        }
        //for(int i=0;i<=n;i++)
        //      cout<<sumleft[i]<<" ";
        //cout<<endl;

        sumright[0]=0;int k=1;
        for(int i=n-1;i>=0;i--) 
        {
                sumright[k]=sumright[k-1]+v[i]*r;
                k++;
        }
        //for(int i=0;i<=n;i++)
        //      cout<<sumright[i]<<" ";
        //cout<<endl;
        ll ans=99999999999999;
        for(int takeleft=0;takeleft<=n;takeleft++)
        {
                //cout<<sumright[takeleft]<<" "<<sumright[n-takeleft]<<" ";
                ll val=sumleft[takeleft]+sumright[n-takeleft];
                if(takeleft>n-takeleft)
                    val+=((2*takeleft-n-1)*ql);
                if(takeleft<n-takeleft)
                    val+=((n-2*takeleft-1)*qr);
                //cout<<val<<endl;
                if(val<ans){
                        //cout<<takeleft<<endl;
                        ans=val;
                    }

        }
        cout<<ans<<endl;
}
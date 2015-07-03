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
int last4[100009];
int last7[100009];
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        string a,b;
        cin>>a>>b;

        int ca47;int ca74;
        ca74=ca47=0;
        rep(i,a.length())
        {
                char ch1=a[i];
                char ch2=b[i];
                if(ch1!=ch2)
                {
                        if(ch1=='7' && ch2=='4')
                                ca74++;
                        else
                                ca47++;
                }

        }
        int ans=min(ca74,ca47);
        ca74=ca74-ans;
        ca47=ca47-ans;
        ans=ans+ca74+ca47;
        cout<<ans<<endl;


  }
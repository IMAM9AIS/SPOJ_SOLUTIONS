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
#define pp pair<int,string> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
vector<string> vs;
VP v;
int re[3500];
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        s(n);
        rep(i,n)
        {
                string s;cin>>s;
                int a;s(a);
                v.pb(pp(a,s));

        }
        sort(v.begin(),v.end(),greater<pp>());
        int m=10;
        rep(i,n)
        {
                re[i]=m;
                m=m+10;

        }
        rep(i,n)
        {
                int c=0;int tobe=v[i].first; int val=re[i];
                for(int j=i+1;j<n;j++)
                {
                        if(re[j]>val)
                            c++;

                }
                for(int j=i+1;j<n;j++)
                {
                        if(re[j]>val && c>tobe)
                        {
                                int t=re[i];
                                re[i]=re[j];
                                re[j]=t;
                                c--;
                        }
                }
                if(c!=tobe){
                        printf("-1\n");
                        exit(0);
                    }

        }
        for(int i=n-1;i>=0;i--)
        {
                cout<<v[i].second<<" "<<re[i]<<endl;
        }

}
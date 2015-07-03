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
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int ar[105][105];
        int n;
        cin>>n;
        rep(i,n)
        {
            string s;cin>>s;
            rep(j,n)
            {
                    char ch=s[j];
                    ar[i][j]=ch;

            }
        }
        int row[105];int col[105];
        rep(i,105)
        {
                row[i]=col[i]=0;
        }
        VP ans;
        rep(i,n)
        {
                rep(j,n)
                {
                        if(ar[i][j]=='.' && !row[i] && !col[j])
                        {
                                row[i]=1;col[j]=1;
                                //cout<<i<<j<<endl;
                                ans.pb(pp(i,j));
                        }
                }
        }
        for(int i=n-1;i>=0;i--)
        {
                for(int j=n-1;j>=0;j--)
                {
                        if(!(row[i]||col[j]))
                        {
                                
                                int d=0;
                                rep(k,n)
                                {
                                        if(ar[i][k]=='.')
                                        {
                                                row[i]=col[k]=1;
                                                ans.pb(pp(i,k));

                                                d=1;
                                                break;
                                        }
                                }
                                if(!d)
                                {
                                        rep(k,n)
                                        {
                                                if(ar[k][j]=='.')
                                                {
                                                        row[k]=col[j]=1;
                                                        ans.pb(pp(k,j));
                                                        d=1;
                                                        break;
                                                }
                                        }
                                }

                        }
                }
        }



        rep(i,n)
        {
                rep(j,n)
                {
                        if(row[i]==0 && col[j]==0)
                        {
                                cout<<"-1"<<endl;
                                return 0;
                        }
                }
        }
        rep(i,sz(ans))
        {
                cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
        }

}
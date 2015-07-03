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
string s;
int n;
void dfs(int s1,int s2,int pre,vector<int> re,int chance)
{
    if(re.size()==n )
    {
            cout<<"YES"<<endl;
            rep(i,sz(re))
                cout<<re[i]<<" ";
            exit(0);
    }
    for(int i=1;i<=s.size();i++)
    {
            if(chance==1 && s1+i>s2 && s[i-1]!='0' && i!=pre)
            {re.pb(i);  dfs(s1+i,s2,i,re,2);re.pop_back();}
    
            if(chance==2 && s2+i>s1 && s[i-1]!='0' && i!=pre)
            {
                re.pb(i);dfs(s1,s2+i,i,re,1);re.pop_back();
            }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        int ar[102];
        
        //string s;
        cin>>s;
        //int n;
        cin>>n;
        //VI v;VP vp;
        VI re;
        dfs(0,0,0,re,1);
        cout<<"NO"<<endl;
        

        

}
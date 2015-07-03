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
void dfs(string st,int pos)
{
    //  cout<<st<<" "<<pos<<endl;
        if(pos==sz(s) || st.size()==3)
        {   

                if(sz(st)!=0){

                    if(sz(st)==1 && st=="0")
                    {
                            cout<<"YES"<<endl;
                            cout<<"0"<<endl;exit(0);
                    }
                    if(sz(st)>1 && st[0]=='0')
                            return ;

                int pos=sz(st)-1;
                int c=0;int n=0;int base=1;
                while(c!=3 && pos>=0)
                {
                        int num=st[pos]-'0';
                        n=num*base+n;
                        pos--;
                        base=base*10;
                        c++;
                }
                if(n%8==0)
                {
                        cout<<"YES"<<endl;
                        cout<<n<<endl;
                        exit(0);
                }


            }
            return;

        }
        string tmp=st;
        tmp=tmp+s[pos];
        dfs(tmp,pos+1);
        dfs(st,pos+1);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        cin>>s;
        dfs("",0);
        cout<<"NO"<<endl;
   }
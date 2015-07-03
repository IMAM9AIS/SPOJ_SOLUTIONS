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
char st[300000];
vector<char> re;
int main()
{
    //s_base::sync_with_stdio(false);cin.tie(NULL);
            #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        scanf("%s",st);
        //cout<<st<<endl;
        int l=strlen(st) ;int pos=0;//cout<<l<<endl;
        rep(i,l)
        {
                if(i>1)
                {
                        if(st[i]==st[i-1]&& st[i]==st[i-2])
                            continue;
                        else if(st[i]==st[i-1]&&re[pos-2]==re[pos-3] && pos>=3)
                                continue;

                        else
                        {
                                re.pb(st[i]);
                                pos++;
                        }
                }
                else
                {
                        re.pb(st[i]);
                        pos++;
                }
        }
        //cout<<re.size()<<endl;
        rep(i,pos)
            printf("%c",re[i]);


        return 0;
 }
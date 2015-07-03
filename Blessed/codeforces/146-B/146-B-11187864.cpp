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
string getmask(int num)
{
        stringstream is;
        is<< num;
        string ans= is.str();
        string re="";
        for(int i=0;i<ans.length();i++)
        {
                char ch=ans[i];
                if(ch=='4'|| ch=='7')
                    re=re+ch;
        }
        return re;
}
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int a;string b;
        s(a);cin>>b;
        int i=a+1;
        while(1)
        {
                string ans=getmask(i);
                if(ans==b){
                    cout<<i<<endl;
                    exit(0);
                }
                
                
                i++;
        }
}
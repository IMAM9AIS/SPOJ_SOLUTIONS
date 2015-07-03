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
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        string s;
        cin>>s;
        string ans="";
        if(s[0]=='-')
                ans=ans+'(';
        ans=ans+'$';

        int dot=-1;int pos;
        for( pos=0;pos<s.length();pos++)
            if(s[pos]=='.')
                    break;
        string rev="";int c=0;int at=0;
        for(int i=pos-1;i>=0;i--)
        {   
                if(s[i]!='-')
                {       
                        char ch;
                        if(at)
                        {
                        ch=',';
                        string add(1,ch);
                        rev=add+rev;
                        at=0;
                        }
                         ch=s[i];

                        string add(1,ch);
                        rev=add+rev;
                        c++;
                        if(c==3)
                        {
                                at=1;

                                c=0;
                        }
                }
        }
        ans=ans+rev;
        ans=ans+'.';pos++;
        for(int i=1;i<=2;i++)
        {       
                if(pos<s.length())
                        ans=ans+s[pos++];
                else
                        ans=ans+'0';

        }
        if(s[0]=='-')
            ans=ans+')';
        cout<<ans<<endl;
}
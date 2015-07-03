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

        string s1;string s2;
        cin>>s1>>s2;
        int pre=1;string re="";
        for(int i=0;i<s1.length();i++)
        {       
                if(s1[i]==s2[i])
                        re=re+s1[i];
                else
                {
                        if(pre==1)
                        {       re=re+s1[i];
                                pre=2;
                        }
                        else
                        {
                                re=re+s2[i];
                                pre=1;
                        }
                }
        }
        if(pre==1)
            cout<<re<<endl;
        else
            cout<<"impossible"<<endl;
}
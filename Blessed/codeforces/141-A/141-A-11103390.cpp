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
        string s1,s2;
        cin>>s1>>s2;
        string s3;
        cin>>s3;
        int l1=s1.length();
        int l2=s2.length();
        int l3=s3.length();
        int ar1[256];
        int ar2[256];
        mem(ar1,0);
        mem(ar2,0);
        rep(i,l1)
        {
                char ch=s1[i];
                ar1[ch]++;
        }
        rep(i,l2)
        {
                char ch=s2[i];
                ar1[ch]++;
        }
        rep(i,l3)
        {
                char ch=s3[i];
                ar2[ch]++;
        }
        for(int i='A';i<='Z';i++)
        {
                if(ar1[i]!=ar2[i])
                    {
                            printf("NO\n");
                            exit(0);
                    }
        }
        printf("%s\n","YES" );
}
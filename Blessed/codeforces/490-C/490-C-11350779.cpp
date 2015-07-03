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
char s[1000006];
int  remr[1000006];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        scanf("%s",s);
        int a,b;
        s(a);s(b);
        if(s[0]=='0')
        {
                cout<<"NO"<<endl;
                return 0;
        }
        int l=strlen(s);
        int pos=l-1;
        int rem=0;
        //remr[pos]=rem;
        int base=1;
        while(pos>=0)
        {
            rem=((s[pos]-'0')*base+rem)%b;
            remr[pos]=rem;
            base=(base*10)%b;
            pos--;
        }
        // rem=s[0]-'0'; 
        rem=0;
        for(int i=0;i<l;i++)
        {
                rem=rem*10+(s[i]-'0');
                rem=rem%a;
                if(!rem && s[i+1]!='0' && i+1<l && remr[i+1]==0)
                {
                        printf("YES\n");
                        printf("%.*s\n%s",i+1,s,s+i+1);
                        return 0;

                }



        }
        printf("NO\n");
        return 0;

}
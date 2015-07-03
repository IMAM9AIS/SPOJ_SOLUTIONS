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
        int n,m;
        cin>>n>>m;
        char ar[55][55];
        rep(i,n)
        {
                string s;
                cin>>s;
                rep(j,m)
                {
                        char ch=s[j];
                        ar[i][j]=ch;
                }
        }
            int cp=0;

        for(int i=0;i<=n-2;i++)
        {
                for(int j=0;j<=m-2;j++)
                {
                        //cout<<i<<" "<<j<<endl;
                        char ch1=ar[i][j];
                        char ch2=ar[i][j+1];
                        char ch3=ar[i+1][j];
                        char ch4=ar[i+1][j+1];
                    
                        int a,b,c,d;
                        a=b=c=d=0;
                        if(ch1=='f'|| ch2=='f' || ch3=='f' || ch4=='f')
                                a++;
                        if(ch1=='a'|| ch2=='a' || ch3=='a' || ch4=='a')
                                b++;
                        if(ch1=='c'|| ch2=='c' || ch3=='c' || ch4=='c')
                                c++;
                        if(ch1=='e'|| ch2=='e' || ch3=='e' || ch4=='e')
                                d++;

                        if(a && b && c && d )
                            cp++;


                }
        }
        cout<<cp<<endl;
}
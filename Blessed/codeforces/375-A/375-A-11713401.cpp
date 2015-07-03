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
string numdiv[7]={"1869", "6198", "1896", "1689", "1986", "1968", "1698"};
int count1[10];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int used[10];
        rep(i,10){
            used[i]=0;
            count1[i]=0;
        }

            int num=0;
    //  findstrings(num,used);
        string s;
        cin>>s;
        rep(i,sz(s))
        {
                int num=s[i]-'0';
                count1[num]++;
        }
        int rem=0;
        for(int i=1;i<=9;i++)
        {
                int c=count1[i];
                if(i!=1 && i!=6 && i!=8 && i!=9)
                {
                        while(c!=0)
                        {
                                int num=rem*10+i;
                                rem=num%7;
                                c--;
                                cout<<i;
                        }
                }
                else
                {
                        while(c!=1)
                        {
                                        int num=rem*10+i;
                                rem=num%7;
                                c--;
                                cout<<i;
                        }
                }

        }
        cout<<numdiv[rem];
        while(count1[0]--)
                cout<<0;

}
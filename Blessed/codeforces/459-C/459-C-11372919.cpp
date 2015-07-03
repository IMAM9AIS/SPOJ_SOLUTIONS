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
int ar[1000+2][1000+2];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif

        int n,k,d;
        cin>>n>>k>>d;
        ll check=1;
        for(int i=1;i<=d;i++)
        {
            check=check*k;
            if(check>=n)
                break;
        }
        if(check<n)
        {
                cout<<"-1"<<endl;
                return 0;
        }
        int dif=0;
        for(int col=d-1;col>=0;col--)
        {
                if(!dif)dif=1;
                else
                    dif=dif*k;
                int start=0;int c=0;
                for(int row=0;row<n;row++)
                {
                    
                    if(c<dif){
                        ar[row][col]=start;
                        c++;
                    }
                    else
                    {
                            start++;if(start==k)start=0;
                            ar[row][col]=start;
                            c=1;
                    }

                }
        }

        for(int i=0;i<d;i++)
        {
                for(int j=0;j<n;j++)
                {
                        cout<<ar[j][i]+1<<" ";
                }
                cout<<endl;
        }

}
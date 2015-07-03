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


        int n,k;
        cin>>n>>k;
    
        if(n==1)
        {
                if(k!=0)
                        cout<<"-1"<<endl;
                else
                    cout<<"1"<<endl;
                return 0;
        }
        int m=n/2;
        if(m>k)
        {
                cout<<"-1"<<endl;
                return 0; 
        }
        int num=2;
        while(m!=1)
        {
            cout<<num<<" "<<num+1<<" ";
            num=num+2;
            m--;
            k--;
        }
    
                if(num<k)
                    num=k;

                while(1)
                {
                    if(num%k==0)
                            break;
                    num++;
                }
                int div1=num/k;
                cout<<num<<" "<<k*(div1+1)<<" ";
        

        if(n&1)
                cout<<"1"<<endl;
}
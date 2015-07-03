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
        int n;
        s(n);
        Q q1;Q q2;
        int n1;s(n1);
        rep(i,n1)
        {
                int a;s(a);
                q1.push(a);
        }
        int n2;s(n2);
        rep(i,n2)
        {
                int a;s(a);
                q2.push(a);
        }
        int i=1;int ca=0;int cb=0;int d=0;
        for( i=1;i<=1000000;i++)
        {
                if(q1.empty()|| q2.empty())
                {   d=1;
                        break;
                }
                
                int a=q1.front();
                int b=q2.front();
                q1.pop();
                q2.pop();
                //if(i<30)
                //  cout<<a<<" "<<b<<endl;
                if(a>b)
                {
                        q1.push(b);
                        q1.push(a);
                        ca++;
                }
                else if(b>a)
                {
                        q2.push(a);
                        q2.push(b);
                        cb++;
                }


        }
        //cout<<i<<endl;
        if(d==1)
        {
                cout<<i-1<<" ";
                if(ca>cb)
                {
                        cout<<"1"<<endl;
                }
                else
                    cout<<"2"<<endl;
        }
        else
        {
                cout<<"-1"<<endl;
        }
}
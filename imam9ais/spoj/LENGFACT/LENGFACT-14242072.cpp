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
		int t;
		s(t);
		while(t--)
		{
				
				double n;
				cin>>n;
				double pi=M_PI;
				double ans=(ceil)((log(2.0*acos(-1))-2.0*n+ (log(n)*(1.0+2.0*n)))/(log(10)*2.0));
				if(n==0||n==1)
					cout<<"1"<<endl;
				else
				cout<<(ll)ans<<endl;

		}
}

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
int mint(int a,int b,int c)
{
	if(a==c || b==c)
		return 1;
	else if(c>a && c>b)
		return -1;
	else if( c%(__gcd(a,b)))
		return -1;
	else
	{
		int a1,b1;
		a1=0;b1=0;
		int st=0;
		while(a1!=c && b1!=c)
		{
			//cout<<a1<<" "<<b1<<endl;
			if(a1==0){
				a1=a;
				st++;
			}
			else if(b1==b)
			{
				b1=0;
				st++;
			}
			else
			{
				if(a1>= b-b1)
				{
					a1=a1-(b-b1);
					b1=b;
					st++;
				}
				else
				{
					
					b1=b1+(a1);a1=0;
					st++;
				}
			}
		}
	
		int ans=st;
		st=0;
		a1=0;b1=0;
		int k=1;
		while(a1!=c && b1!=c)
		{
		
			if(b1==0)
			{
				b1=b;
				st++;
			}
			else if(a1==a)
			{		
				a1=0;
				st++;
			}
			else
			{
				if(b1>= a-a1)
				{
					b1=b1-(a-a1);
					a1=a;
					st++;
				}
				else
				{
					//b1=0;
					a1=a1+b1;b1=0;
					st++;
				}
			}
		}

		
		ans=min(ans,st);
		return ans;
	}
}

			
int main()
{
	int t;
	s(t);
	while(t--)
	{
		int a,b,c;
		s(a);s(b);s(c);
		int ans=mint(a,b,c);
		p(ans);
		printf("\n");
	}
}


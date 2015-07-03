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
	while(1)
	{
		map<int,int> mp;
		char s[5];
		scanf(" %s",s);
		int n1=s[0]-'0';
		int n2=s[1]-'0';
		int nz=s[3]-'0';
		int num=n1*10+n2;
		num=num*pow(10,nz);
		if(num==0)break;
		int n=num;int c=0;
		if(!(n&(n-1)))
			printf("1\n");
		else
		{
			while(n!=0)
			{	
				n=n/2;c++;
			}
			c--;
			int dig=1<<c;
//			cout<<dig<<endl;
			int diff=num-dig;
			printf("%d\n",2*diff+1);
		}
	}
}



			

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
char s[1000007];
int f[1000007];
int n;
void build()
{
	int j=0;	
	f[0]=j;
	FOR(i,1,n)
	{
		if(s[i]==s[j])
		{
			j++;
			f[i]=j;
		}
		else
		{
			if(j!=0)
			{
				j=f[j-1];
				i--;
			}
			else
				f[i]=0;
		}
	}
}
	
int main()
{
	int t;
	s(t);int k=1;
	while(t--)
	{
	//	int n;
		s(n);
		printf("Test case #%d\n",k++);

		scanf("%s",s);
		build();int len;
		FOR(i,1,n)
		{
			int len=i+1;
			int small_p=(i+1)-f[i];;
			if(len%small_p==0 && small_p!=len)
			{
				printf("%d %d\n",i+1,(len)/(small_p));
			}
		}
		printf("\n");
			
			
	}
	
}


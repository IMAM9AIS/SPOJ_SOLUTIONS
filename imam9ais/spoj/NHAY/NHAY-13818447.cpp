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
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
int f[1000008];
char pat[1000009];
char s[1000009];
int l;
void build()
{
	int j=0;
	f[0]=0;
	FOR(i,1,l)
	{
		if(pat[i]==pat[j])
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

		while(cin>>l)
		{
		
			scanf("%s",pat);		
			scanf("%s",s);
			build();
			int tp=0;int pp=0;
			int l1=strlen(s);
			while(tp<l1)
			{
				if(pat[pp]==s[tp])
				{	
					pp++;
					tp++;
					if(pp==l)
					{
						printf("%d\n",tp-pp);
						pp=f[pp-1];
					}
				}
				else
				{
					if(pp==0)
						tp++;
					else
					{
						pp=f[pp-1];
					}
				}
			}
			printf("\n");
		}

}		

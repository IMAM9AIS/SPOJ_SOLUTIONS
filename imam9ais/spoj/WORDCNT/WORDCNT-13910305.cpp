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
int ar[1006];
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream is(s);
		string st;
		int i=0;
		while(is>>st)
		{
			int l=st.length();
			ar[i++]=l;			
				
		}
		int pos=0;
		int prec=1;
		while(pos<i)
		{
			int count1=1;
			pos++;
//			int count1=0;
			while(ar[pos]==ar[pos-1])
			{
				pos++;
				count1++;
				if(count1>prec)
					prec=count1;
			}
			
		}
		printf("%d\n",prec);
	}
}


#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
typedef long long ll;
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
    str[i] = '\0';
}
char s[6200];
int dp[6200][6200];
int mint(int i,int j)
{
	
		if(dp[i][j]!=-1)
			return dp[i][j];

	if(i>=j)
	{	dp[i][j]=0;	
		return 0;
	}
	else
	{
		if(s[i-1]==s[j-1])
			dp[i][j]=mint(i+1,j-1);
	
		else
			dp[i][j]=(min(1+mint(i,j-1),1+mint(i+1,j)));
		return dp[i][j];
	}
}

int main()
{
	int t;
	scanint(t);
	while(t--)
	{
		//char s[6200];
		memset(dp,-1,sizeof dp);
		fastRead_string(s);
		int i=1;int j=strlen(s);int c=0;
		c=mint(i,j);
		printf("%d\n",c);
	}
}


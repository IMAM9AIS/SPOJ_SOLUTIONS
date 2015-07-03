#include<bits/stdc++.h>
using namespace std;
int n1;
int n2;
int k;
char  s1[2005];
char s2[2005];
int dp[2005][2005];
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

int mindist(int pos1,int pos2)
{
	if(dp[pos1][pos2]!=-1)
		return dp[pos1][pos2];

	if(pos1==n1 && pos2==n2)
	{	dp[pos1][pos2]=0;
		return 0;
	}
	else
	{
		int a1,a2,a3;int min1=9999;
		if(pos2!=n2)
		{
			 a1=k+mindist(pos1,pos2+1);
			min1=a1;
		}
		if(pos1!=n1)
		{
			 a2=k+mindist(pos1+1,pos2);
				min1=min(min1,a2);
		}
		if(pos1!=n1 && pos2!=n2)
		{	
			 a3=abs(s1[pos1]-s2[pos2])+mindist(pos1+1,pos2+1);
			min1=min(min1,a3);
		}
		dp[pos1][pos2]=min1;
		return min1;
		
	}
}
int main()
{
	memset(dp,-1,sizeof dp);
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%d",&k);
	n1=strlen(s1);
	n2=strlen(s2);
	int a=mindist(0,0);
	cout<<a<<endl;
}


#include<bits/stdc++.h>
using namespace std;
string s;
int dp[26][10000];
int sumofstring(string su)
{
	int sum=0;
	for(int i=0;i<su.length();i++)
	{
		char ch=su[i];
		int num= ch-'0';
		sum+=num;
	}
	return sum;
}
int noof(int stringpos,int presum)
{
	if(presum!=-1)
	if(dp[stringpos][presum]!=-1)
		return dp[stringpos][presum];
	if(stringpos==s.length())
	{	dp[stringpos][presum]=1;
		return 1;
	}
	else
	{
		int count=0;
		for(int include=1;include<=s.length()-stringpos;include++)
		{
			string taken=s.substr(stringpos,include);
			int sumoftaken=sumofstring(taken);
			if(sumoftaken>=presum)
			{
				int c=noof(stringpos+include,sumoftaken);
				count+=c;
			}
		}
		dp[stringpos][presum]=count;
		return count;
	}
	
}
int main()
{
	int k=1;
	while(1)
	{
		memset(dp,-1,sizeof dp);
		cin>>s;
		if(s=="bye")break;
		int a=noof(0,-1);
		printf("%d. %d\n",k++,a);
	}
}


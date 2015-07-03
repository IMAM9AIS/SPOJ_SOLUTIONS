#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	int p[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		p[i]=1;
	}
	int max1=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(ar[j]<ar[i] && p[j]+1>p[i])
			{	p[i]=p[j]+1;max1=max(max1,p[i]);}
		}
	}
	printf("%d\n",max1);
}

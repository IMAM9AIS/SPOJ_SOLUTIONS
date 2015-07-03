#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==-1)
			break;
		n=n-1;int i=1;
		while(n>0)
		{
			n=n-6*i;
			i++;
		}
		if(n==0)
			printf("Y\n");
		else
			printf("N\n");
	}
}



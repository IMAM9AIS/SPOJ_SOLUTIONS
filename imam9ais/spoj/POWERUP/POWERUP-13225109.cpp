#include<bits/stdc++.h>
using namespace std;
unsigned long long int fastpow(unsigned long long int base,unsigned long long int pow,unsigned long long int c)
{
	if(pow==0)
		return 1;
	 if(pow==1)
		return base%c;
	 if(base==0)
		return 0;
	unsigned long long int a=fastpow(base,pow/2,c);
	 if(pow%2==0)
	{
		return (a*a)%c;
	}
	else
		return (((a*a)%c)*base)%c;
}
int main()
{
	while(1)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1 && b==-1 && c==-1)
			break;
		else if(b==0 && c!=0)
			printf("1\n");
		else if(c==0)
		{
			printf("%d\n",(a%1000000007));
		}
		else if(a%1000000007==0)
			printf("0\n");	
		else
		{
			int a1=fastpow(b,c,1000000006);
			int b1=fastpow(a,a1,1000000007);
			printf("%d\n",b1);
		}
	}
	return 0;
}

		
	

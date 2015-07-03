#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int s,d;scanf("%lld %lld",&s,&d);
	while(s!=-1 && d!=-1)
	{
		int div1,div2;
		if((s%1000==0)&&(d%37==0))	
		{
			div1=s/1000;
			div2=d/37;
			
			if(div1==div2)
			printf("Y\n");
			else
			printf("N\n");
			
		}
		else
			printf("N\n");
		scanf("%lld %lld",&s,&d);
	}
	return 0;
}

	

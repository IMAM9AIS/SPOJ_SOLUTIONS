#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int res=0;
		scanf("%lld",&res);
		char op;
		while(1)
		{
			
			scanf("%s",&op);
			//cout<<op<<endl;
			if(op=='=')
				break;
			long long int a;
			scanf("%lld",&a);
			switch(op)
			{
				case '+':res=res+a;
					break;
				case '-':res=res-a;
					break;
				case '*':res=res*a;		
					break;
				case '/':res=res/a;
					break;
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}

		

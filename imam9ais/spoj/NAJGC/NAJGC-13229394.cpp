#include<bits/stdc++.h>
using namespace std;
 long long  int gcd( long long int a, long long int b)
{
	 return (b==0)?a:gcd(b,a%b);
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		 long long int x1,x2,y1,y2;
		scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
		  long long  int num= (x1)*(x2+1)+(y1)*(y2+1);
		long long int den=(x1+y1)*(x2+y2+1);
		if(num==0 || den==0)
			printf("Case %d: 0\n",i);
		else
		{
			//cout<<num<<" "<<den<<endl;
		long  long int g=gcd(max(num,den),min(num,den));
			num=num/g;
			den=den/g;
			printf("Case %d: %lld/%lld\n",i,num,den);
		}
	}
}


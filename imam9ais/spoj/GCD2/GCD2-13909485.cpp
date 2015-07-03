#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,i,num;
		char b[1000];
		scanf("%d%s",&a,b);
		if(a==0)
			printf("%s\n",b);
		else
		{
			int l=strlen(b);
			num=0;
			for(int i=0;i<l;i++)
			{
				num=num*10+(b[i]-'0');
				num=num%a;		
			}
			printf("%d\n",gcd(max(a,num),min(a,num)));
		}
	}
}

		

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int three=0;
	int one4=0;
	int one2=0;
	int n;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		if(a=="1/2")
			one2++;
		if(a=="1/4")
			one4++;
		if(a=="3/4")
			three++;
	}
	int c=0;
	while(three!=0)
	{
		three--;
		if(one4)
			one4--;
		c++;
	}
	while(one2!=0)
	{
		if(one2>=2)
		{	one2=one2-2;
			c++;
		}
		else
		{
			one2--;
			if(one4>=2)
				one4=one4-2;
			else if(one4==1)
				one4=one4-1;
			c++;
		}
	}
	while(one4!=0)
	{
		if(one4>=4)
		{
			one4=one4-4;
			c++;
		}
		else
		{
			one4=0;
			c++;
		}
	}
	cout<<c+1<<endl;
	return 0;

}

		

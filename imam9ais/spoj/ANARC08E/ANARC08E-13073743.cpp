#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int a,b,c;
		cin>>a>>b;
		if(a==-1)
			break;
		c=a+b;
		if(a==1 || b==1)
		{
			cout<<a<<"+"<<b<<"="<<c<<endl;
		}
		else
		{
			cout<<a<<"+"<<b<<"!="<<c<<endl;
		}
	}
	return 0;
}


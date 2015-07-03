#include<bits/stdc++.h>
using namespace  std;
int main()
{
	 int n;
	cin>>n;
	if(n==0)
		cout<<"0"<<endl;
	else
	{
	string res="";
	while(n!=0)
	{
		int rem=n%-2;
		n=n/-2;
		if(rem<0)
		{
			rem=rem+2;
			n=n+1;
		}
		char ch[2];
		sprintf(ch,"%d",rem);
		res=ch+res;
	}
	cout<<res<<endl;
	}
	return 0;
}


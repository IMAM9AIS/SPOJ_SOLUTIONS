#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string num;unsigned long long int d;cin>>num>>d;
		char ch=num[num.length()-1];
		int n=ch-'0';
		if(d==0)
			cout<<"1"<<endl;
		else
		{
		d=d%4;if(d==0)d=4;
		int r=pow(n,d);
		cout<<r%10<<endl;
		}
	}
}


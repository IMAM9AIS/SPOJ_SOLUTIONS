#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		unsigned long long int a,b;cin>>a>>b;int po;
		if(b%4==0)	
			po=4;
		else
			po=b%4;	
		int num=pow(a,po);
		if(b==0)
			cout<<"1"<<endl;
		else
			cout<<num%10<<endl;
	}
}

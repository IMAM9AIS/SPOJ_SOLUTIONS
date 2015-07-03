#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		int i;int sum=0;
		for(i=0;i<t;i++){
		sum=sum+ (t-i)*(t-i);
		}
		cout<<sum<<endl;
		cin>>t;
	}
	return 0;
}


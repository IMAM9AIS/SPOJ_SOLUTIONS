#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int i;int c=0;int minus=0;
	for(i=1;i<=sqrt(n);i++)
	{
		int k=1;
		while(i*k<=n)
		{
			k++;c++;
		}
		c=c-minus;
		minus++;
	}
	
		
	cout<<c<<endl;
}


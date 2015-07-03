#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;vector<int> v1,v2;int k=n;
		while(n--)
		{
			int a;cin>>a;
			v1.push_back(a);
		}
		while(k--)
		{
			int a;cin>>a;
			v2.push_back(a);
		}
		sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());
		int sum=0;int p=v1.size()-1;
		while(p!=-1)
		{
			sum=sum+ v1[p]*v2[p];
			p--;
		}
		cout<<sum<<endl;
	}
	return 0;
}


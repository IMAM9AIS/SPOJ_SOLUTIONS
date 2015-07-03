#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s;
	cin>>n>>k>>s;
	int t=k*s;
	vector<int>v;
	while(n--)
	{
		int g;cin>>g;v.push_back(g);
	}
	sort(v.begin(),v.end());
	int i=v.size()-1;
	int sum=0;int c=0;
	while(sum<t)
	{
		sum=sum+v[i];
		i--;
		c++;
	}
	printf("%d",c);
	return 0;
}


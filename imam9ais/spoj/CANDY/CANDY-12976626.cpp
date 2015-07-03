#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	while(n!=-1)
	{
		vector<int> v;int sum=0;
		int i;for(i=0;i<n;i++)
		{
			int a;cin>>a;
			sum=sum+a;v.push_back(a);
		}
		sort(v.begin(),v.end());
		if(sum%n!=0)
			cout<<"-1"<<endl;
		else
		{
			int c=0;
			int e=sum/n;
			int beg=0;int end=n-1;
			while(beg<end)
			{
				if(v[beg]<e && v[end]>e)
				{	
					v[beg]++;v[end]--;c++;
				}
				if(v[beg]==e)
					beg++;
				if(v[end]==e)
					end--;		
			}
		
		cout<<c<<endl;
		}
		cin>>n;
	}
	return 0;
}

					

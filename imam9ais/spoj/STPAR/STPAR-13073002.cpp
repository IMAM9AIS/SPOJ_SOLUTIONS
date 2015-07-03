#include<bits/stdc++.h>
using namespace std;
int main()
{	
	while(1)
	{
		int n;int i;
		scanf("%d",&n);
		if(n==0)
			break;
		int k=n;vector<int>v;stack<int> s;
		while(k--)
		{
			int num;scanf("%d",&num);
			v.push_back(num);
		}
		int search=1;
		for(i=0;i<n;i++)
		{
//			cout<<i<<endl;

			if(v[i]==search)
			{
				search++;
			}
			else
			{
				if(!s.empty())
				{
					int a=s.top();
					if(a==search){
					s.pop();
					i--;
					search++;
					}
					else
					{
						s.push(v[i]);
					}
				}
				else
				{
					s.push(v[i]);
				}
			}
		}
//		cout<<search<<endl;
		if(search==n+1)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			while(1)
			{
				if(s.top()==search)
				{
					search++;
					s.pop();
					if(s.empty())
						break;
				}
				else
					break;
			}
		//	cout<<search<<endl;
			if(search==n+1)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
	}
	return 0;
}
	

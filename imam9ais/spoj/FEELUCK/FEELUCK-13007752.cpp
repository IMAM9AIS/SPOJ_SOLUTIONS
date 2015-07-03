#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);int k=1;
	while(t--)
	{
		int max1=INT_MIN;
		vector<string>word ;vector<int>num;
		int i;for(i=1;i<=10;i++){
			string st;cin>>st;int a;cin>>a;
			word.push_back(st);num.push_back(a);
			max1=max(max1,a);
			}
			cout<<"Case #"<<k<<":"<<endl;k++;
			for(i=0;i<word.size();i++)
			{
				if(num[i]==max1)
					cout<<word[i]<<endl;
			}

	}
}


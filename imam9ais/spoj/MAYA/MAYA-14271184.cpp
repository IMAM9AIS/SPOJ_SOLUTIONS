#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);		
		if(n==0)	
			break;
		int i;vector<int> v;
		char ch=getchar();
		for(i=1;i<=n;i++)
		{
		int dot=0;int line=0;
			ch=getchar();
			while(ch!='\n')
			{
				if(ch=='.')
					dot++;
				if(ch=='-')
					line++;
			ch=getchar();
			}
		//	cout<<dot<<line<<endl;
			int digit=5*line+dot;
			v.push_back(digit);
		}
		reverse(v.begin(),v.end());
		int sum=0;int  k=1;
		for(i=0;i<v.size();i++)
		{
		//	cout<<v[i]<<endl;
			sum=sum+ v[i]*k;
			if(i==0)
				k=20;
			else if(i==1)
				k=360;
			else
				k=20*k;
		}
		printf("%d\n",sum);
	}
	return 0;
}

		
			

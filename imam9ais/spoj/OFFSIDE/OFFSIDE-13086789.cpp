#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,d;
	while(1)
	{
		scanf("%d %d",&a,&d);
		if(a==0)
			break;
		vector<int> att,deff;
		int i;
		for(i=1;i<=a;i++)
		{	int k;cin>>k;att.push_back(k);}
		for(i=1;i<=d;i++)
		{	int k;cin>>k;deff.push_back(k);}
		sort(att.begin(),att.end());
		sort(deff.begin(),deff.end());
		if(att[0]<deff[1])
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}

			

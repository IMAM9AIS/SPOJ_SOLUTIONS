#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		unsigned long long int n;scanf("%llu",&n);
		if(!n)
			break;
		vector<unsigned long long int> stu;
		vector<unsigned long long int> cand;
		unsigned long long int i;
		for(i=1;i<=n;i++)
		{
			unsigned long long int k;scanf("%llu",&k);stu.push_back(k);
		}
		for(i=1;i<=n;i++)
                {
                 unsigned long long       int k;scanf("%llu",&k);cand.push_back(k);

                }
		sort(stu.begin(),stu.end());
		sort(cand.begin(),cand.end());
		i=0;unsigned long long int j=cand.size()-1;
		unsigned long long int t=0;
		while(i<stu.size())
		{
			t=t+ stu[i]*cand[j];i++;j--;
		}
		printf("%llu\n",t);
	}

}

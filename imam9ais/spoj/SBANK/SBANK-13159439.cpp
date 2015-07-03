#include<bits/stdc++.h>
#define tr(c,i) for(typeof(c.begin())i=c.begin();i!=c.end();i++)

using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		map<string,int> mp;
		scanf("%d\n",&n);
		while(n--)
		{
			char s[40];
			gets(s);
			mp[s]++;
		}
		map<string,int> ::iterator it;
		for(it=mp.begin();it!=mp.end();it++)
			printf("%s %d\n",it->first.c_str(),it->second);
		printf("\n");
	}
	
		
}



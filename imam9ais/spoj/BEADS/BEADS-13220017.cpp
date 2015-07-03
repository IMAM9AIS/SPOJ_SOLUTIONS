#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		string mins=s;
		int pos=0;
		for(int i=1;i<=s.length()-1;i++)
		{
			string tmp=s.substr(i,s.length()-i);
			string b=s.substr(0,i);
			tmp=tmp+b;
			if(lexicographical_compare(tmp.begin(),tmp.end(),mins.begin(),mins.end()))
			{
				mins=tmp;
				pos=i;
			}
		}
		printf("%d\n",pos+1);
	}

			
}

#include<iostream>
#include<string>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<fstream>
#include<utility>
#define INF 2147483647
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	#endif
	string s,v;
	int k,fi=0,se=0,kol=0;
	cin>>s;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>v;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]==v[0]) fi++;
			else
				if(s[j]==v[1]) se++;
				else
				{
					kol+=min(fi,se);
					fi=0;
					se=0;
				}
		}
		kol+=min(fi,se);
		fi=0;
		se=0;
	}
	cout<<kol;
}
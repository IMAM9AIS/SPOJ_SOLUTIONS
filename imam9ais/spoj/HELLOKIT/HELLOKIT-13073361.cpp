#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		string s;int n;
		cin>>s;if(s==".")break;
		scanf("%d",&n);
			
		string re="";
		while(n--)
		{
			re=re+s;
		}
		cout<<re<<endl;
		string ans=re.substr(1,(re.length()-1));
		char ch=re[0];string tmp(1,ch);ans=ans+tmp;
		//cout<<ans<<endl;
		while(ans!=re)
		{
			cout<<ans<<endl;
			ch=ans[0];
			ans=ans.substr(1,(ans.length()-1));
			 string tmp1(1,ch);ans=ans+tmp1;
		//	cout<<ans<<endl;
		}
	}
	return 0;
}


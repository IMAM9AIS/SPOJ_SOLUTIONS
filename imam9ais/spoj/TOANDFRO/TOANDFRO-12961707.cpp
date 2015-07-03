#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		string s;cin>>s;
		vector<string> v;
		int i=0;string word="";int c=0;int strai=1;
		while(i<s.length())
		{
			string tmp(1,s[i]);
			word=word+tmp;
			i++;c++;
			if(c==n)
			{       
				c=0;
				if(strai)
				{
					strai=0;v.push_back(word);
				}
				else
				{
					strai=1;reverse(word.begin(),word.end());
					v.push_back(word);
				}
				word="";	
			}
		}
		
		int pos;string res="";
		for(pos=0;pos<n;pos++)
		{
			int k;
			for(k=0;k<v.size();k++)	
			{
				char ch=v[k][pos];string tmp(1,ch);
				res=res+tmp;
			}
		}
	
	
	cout<<res<<endl;
		cin>>n;
	}

}
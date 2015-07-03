#include<bits/stdc++.h>
using namespace std;
int isjava(string s)
{
	int i=0;
	while(i<s.length())
	{
		if(s[i]>='A' && s[i]<='Z')
			return 1;
		i++;
	}
	return 0;
		
}				
int isc(string s)
{
	int i=0;
	while(i<s.length())
	{
		if(s[i]=='_')
			return 1;
		i++;
	}
	return 0;
}				
string inc(string s)
{
	int i=0;string re="";
	if(s[0]=='_')
	{	re="Error!";
		return re;
	}
	if(s[s.length()-1]=='_')
	{
		re="Error!";
		return re;
	}
	while(i<s.length())
	{
		if(s[i]=='_' && s[i+1]=='_')
			return "Error!";
		if(s[i]=='_')
		{
			s[i+1]=s[i+1]-32;
		}
		i++;
	}
	re="";
	i=0;
	while(i<s.length())
	{
		if(s[i]!='_')
		{
			char ch=s[i];string tmp(1,ch);
			re=re+tmp;
		}
		i++;
	}
	return re;
}
string injava(string s)
{
	if(s[0]>='A' && s[0]<='Z')
		return "Error!";
	string re="";
int	i=0;
	while(i<s.length())
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			char ch='_';string tmp(1,ch);
			re=re+ch;
			s[i]=s[i]+32;
		}
		re=re+s[i];
		i++;
	}
	return re;
}
int main()
{
	string s;
	while(cin>>s)
	{
	//	if(s==".")
	//		break;
		int c=0;int j=0;
		if(isc(s))
			c++;
		if(isjava(s))
			j++;
		
		
		if(c==1 && j==1 )
			cout<<"Error!"<<endl;
		else if(c==0 && j==0)
			cout<<s<<endl;
		else if(c==1)
		{
			string re=inc(s);
			cout<<re<<endl;
		}
		else if(j==1)
		{
			string re=injava(s);
			cout<<re<<endl;
		}
	
	}
	return 0;
}
	
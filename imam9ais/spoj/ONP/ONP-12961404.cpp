#include<bits/stdc++.h>
using namespace std;
int pre(char ch)
{
	switch(ch)
	{
		case'(':return 0;
		case '+': return 1;
		case '-':return 2;
		case  '*':return 3;
		case '/':return 4;
		case '^':return 5;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	stack<char> st;
	int i=0;string re="";
	char ch=s[i];
	st.push(ch);
	for(i=1;i<s.length();i++){
	char ch=s[i];
//	cout<<i<<endl;
	if(ch>='a' && ch<='z')
	{
		string tmp(1,ch);
		re=re+tmp;
	}
	else if(ch=='(')
	{
		st.push(ch);
	}
	else if(ch==')')
	{
		char ch1=st.top();
		st.pop();
		while(ch1!='(')
		{
			string tmp(1,ch1);
			re=re+tmp;
			ch1=st.top();
			st.pop();
		}
	}
	else
	{
		char ch1=st.top();
		while(pre(ch1)>=pre(ch))
		{
			string tmp(1,ch1);
			re=re+tmp;
			st.pop();
			ch1=st.top();
		}
		st.push(ch);
	}
	}
	cout<<re<<endl;
	}		
	
	return 0;
}


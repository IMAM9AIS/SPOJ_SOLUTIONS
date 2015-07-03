#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=1;
	while(1)
	{
	string s;
	cin>>s;
		if(s[0]=='-')
			break;
	stack<char> st;
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='{')
			st.push(s[i]);
		else if(s[i]=='}')
		{
			if(st.empty())
			{
				c++;
				st.push('{');
			}
			else if(st.top()=='{')
				st.pop();
			else if(st.top()=='}')
			{
				c++;
				st.pop();
			}
		}
	}
	while(!st.empty())
	{
		if(st.top()=='{')
		{
			st.pop();
			st.push('}');
			c++;
		}
		else if(st.top()=='}')
		{
			st.pop();
			if(st.top()=='{')
				st.pop();
			else 
			{
				st.pop();
				c++;
			}
		}
	}
	printf("%d. %d\n",k++,c);
}



}

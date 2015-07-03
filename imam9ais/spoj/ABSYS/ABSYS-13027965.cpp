#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string a;char ch;string b;char ch1;string c;
		cin>>a>>ch>>b>>ch1>>c;
		int i;
		for(i=0;i<a.length();i++)
		{
			if(a[i]=='m')
			{
				stringstream is(b);stringstream is1(c);
				int b1,c1;is>>b1;is1>>c1;
				int a1=c1-b1;
				cout<<a1<<" "<<ch<<" "<<b<<" "<<ch1<<" "<<c<<endl;
				break;
			}
		}
		for(i=0;i<b.length();i++)
		{
			if(b[i]=='m')
			{
				 stringstream is(a);stringstream is1(c);
                                int a1,c1;is>>a1;is1>>c1;
                                int b1=c1-a1;
                                cout<<a<<" "<<ch<<" "<<b1<<" "<<ch1<<" "<<c<<endl;
                                break;
			}
		}
		for(i=0;i<c.length();i++)
		{
			if(c[i]=='m')
			{
				 stringstream is(a);stringstream is1(b);
                                int a1,b1;is>>a1;is1>>b1;
                                int c1=b1+a1;
                                cout<<a<<" "<<ch<<" "<<b<<" "<<ch1<<" "<<c1<<endl;
                                break;
                        }
                }
	}
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=10;
	while(k--)
	{
		string s1,s2;
		cin>>s1>>s2;
		vector<int> tot,x;
		int i;i=0;
		while(i<s1.length())
		{
			char ch=s1[i];string tmp(1,ch);stringstream is(tmp);
			int a;is>>a;
			tot.push_back(a);
			i++;
		}
		int left=s1.length()-s2.length();
		while(left--)
			x.push_back(0);
		i=0;
		while(i<s2.length())
		{
			char ch=s2[i];string tmp(1,ch);stringstream is(tmp);
			int a;is>>a;x.push_back(a);
			i++;
		}
		//for(i=0;i<tot.size();i++)
		//	cout<<tot[i]<<" ";
		//for(i=0;i<x.size();i++)
		//	cout<<x[i]<<" ";
		i=tot.size()-1;
		while(i!=-1)
		{
			if(tot[i]>=x[i])
				tot[i]=tot[i]-x[i];
			else
			{
				tot[i-1]=tot[i-1]-1;
				tot[i]=tot[i]+10-x[i];
			}
			i--;
		}
		//for(i=0;i<tot.size();i++)
                  //      cout<<tot[i]<<" ";

		i=0;int carry=0;
		while(i<tot.size())
		{
			int t1=tot[i];
			tot[i]=(tot[i]+carry)/2;
			if((t1%2)!=0)
				carry=10;
			else
				carry=0;
			i++;
		}
		//for(i=0;i<tot.size();i++)
                  //      cout<<tot[i]<<" ";

		i=tot.size()-1;carry=0;
	//	for(i=0;i<x.size();i++)
          //              cout<<x[i]<<" ";

		while(i!=-1)
		{
			x[i]=x[i]+tot[i]+carry;int t=x[i];
			x[i]=t%10;carry=t/10;
			i--;
		}
//		for(i=0;i<x.size();i++)
  //                      cout<<x[i]<<" ";

		if(carry!=0)
			cout<<carry;
		i=0;
		if(carry==0)
			while(x[i]==0)
				i++;
		while(i<x.size())
		{
			cout<<x[i];i++;
		}
		cout<<endl;
		i=0;
		while(tot[i]==0)
			i++;
		while(i<tot.size())
		{
			cout<<tot[i];i++;
		}
		cout<<endl;
	}

	}

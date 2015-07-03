#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int i;	string a;cin>>a;
		if(a=="0")
			break;
		int l=a.length();
		int ar[l];
		ar[l-1]=1;
		if(l>1)	
		{
			string temp="";
			for(i=l-2;i<=l-1;i++)
			{
			char ch=a[i];
			string t(1,ch);
			temp=temp+t;
			}
		stringstream is(temp);
		int a;
		is>>a;
		if(a>26)
			ar[l-2]=1;
		else
			ar[l-2]=2;
		}
		if(a[l-1]=='0')
		{
			ar[l-1]=0;
			ar[l-2]=1;	
		}

		for(i=l-3;i>=0;i--)
		{
			char c1=a[i];char c2=a[i+1];
			
			string t1(1,c1);string t2(1,c2);string tmp="";
			tmp=tmp+t1+t2;stringstream is(tmp);
			int nt;is>>nt;
			if(nt>26)
			ar[i]=ar[i+1];
			else
			ar[i]=ar[i+1]+ar[i+2];
			
			if(tmp=="10"||tmp=="20")
			{
				ar[i]=ar[i+2];
				ar[i+1]=0;
			}	
		}
		printf("%d\n",ar[0]);
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	return(b==0?a:gcd(b,a%b));
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int k=gcd(max(a,b),min(a,b));
		if(c%k==0)	
			cout<<"Case "<<i<<": Yes"<<endl;
		else
			 cout<<"Case "<<i<<": No"<<endl;
	}
}



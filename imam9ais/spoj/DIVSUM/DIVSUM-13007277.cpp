#include<bits/stdc++.h>
using namespace std;
void scanint(int &x)
{
	register int c=getchar_unlocked();
	x=0;
	for(;c>=48&&c<=57;c=getchar_unlocked())
	{
		x=(x<<3)+(x<<1)+c-48;
	}
}
int main()
{
	int t;
	scanint(t);
	while(t--)
	{
		int n;scanint(n);
		int i=2;long long int sum=1;
		while(i<=(n/i))
		{
			if(n%i==0)
			{
				if(i==n/i)
					sum+=i;
				else
					sum=sum+i+(n/i);
			}

			i++;
		}
		if(n==1)
			cout<<"0"<<endl;
		else
			cout<<sum<<endl;
	}
}


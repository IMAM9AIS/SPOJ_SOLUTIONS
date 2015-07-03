#include<bits/stdc++.h>
using namespace std;
int ar[100002];
int dif[100002];
void scanint(int &x)
{
	x=0;
	register int c=getchar_unlocked();
	for(;c>=47&&c<=58;c=getchar_unlocked())
	{
		x=(x<<3)+(x<<1)+c -48;
	}
}
int main()
{
	int t;	
	scanint(t);
	for(int j=1;j<=t;j++)
	{
		printf("Case %d:\n",j);
		int n,q;
		scanint(n);scanint(q);
		int k;scanint(k);
		ar[0]=k;dif[0]=1;
		for(int i=1;i<n;i++)
		{
			scanint(k);
			ar[i]=k;
			if(ar[i]!=ar[i-1])
			{
				dif[i]=dif[i-1]+1;
			}
			else
			{
				dif[i]=dif[i-1];
			}
		}
		
		for(int i=1;i<=q;i++)
		{
			int x,y;scanint(x);scanint(y);
			printf("%d\n",dif[y-1]-dif[x-1]+1);
		}
	}
	return 0;
}



#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int t;
	scanint(t);
	while(t--)
	{
		int ar[100][100];int dist[100][100];
		int n;
		scanint(n);int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
				cin>>ar[i][j];	
		}
		for(j=0;j<n;j++)
			dist[n-1][j]=ar[n-1][j];
		for(i=n-2;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				dist[i][j]=ar[i][j]+max(dist[i+1][j],dist[i+1][j+1]);
			}
		}
		printf("%d\n",dist[0][0]);
	}
	return 0;
}

	


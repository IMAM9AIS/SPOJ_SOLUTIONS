#include<bits/stdc++.h>
using namespace std;
int equal(int ar[],int beg,int end)
{
	int c=ar[beg];int i;
	for(i=beg+1;i<=end;i++)
	{
		if(ar[i]!=c)
			return 0;
	}
	return 1;
}

int main()
{
	int t;	
	scanf("%d",&t);
	while(t--)
	{
		int s,c;
		scanf("%d %d",&s,&c);
		int ar[101];
		int i=0;
		for(i=0;i<s;i++)
		{
			int k;
			scanf("%d",&k);
			ar[i]=k;
		}
		int n=0;vector<int> start;
		int beg=0;int end=s-1;
		while(!equal(ar,beg,end))
		{
			n++;start.push_back(ar[0]);
			int i;
			for(i=0;i<=end-1;i++)
			{
				ar[i]=ar[i+1]-ar[i];
			}
			end--;
		}
		for(i=end+1;i<101;i++)
		{
			ar[i]=0;
		}
		int ap=ar[0];
		int pos=end+1;int m=c;
		while(c--)
		{
			ar[pos]=ap;
			pos++;
		}
		end=pos;
		while(n--)
		{
			int t=ar[0];ar[0]=start[start.size()-1];
			start.pop_back();
			for(i=1;i<=end;i++)
			{
				int p=ar[i];
				ar[i]=ar[i-1]+t;
				t=p;
			}
			end++;
		}
		for(i=s;i<s+m;i++)
			printf("%d ",ar[i]);
		printf("\n");
	}
	return 0;
}


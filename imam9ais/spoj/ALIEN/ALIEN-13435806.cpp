#include<bits/stdc++.h>
using namespace std;
int ar[1000000];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,sumreq;
		scanf("%d %d",&n,&sumreq);
		for(int i=0;i<n;i++)
			scanf("%d",&ar[i]);
		int b=0,e=0,sum=0,maxcount=0;int minsum=0;
		while(e<n)
		{
			sum=sum+ar[e];
			while(sum>sumreq)
			{
				sum=sum-ar[b];
				b++;
				if(b>e)
				{
					e=b;
					sum=ar[b];
					break;
				}
			}
			int c=e-b+1;
			if(c>=maxcount)
			{
				if(c==maxcount && sum<minsum){
				maxcount=c;
				minsum=sum;}
				else if(c>maxcount)
				{
					maxcount=c;
					minsum=sum;
				}
			}
			
				e++;
		}
		
		cout<<minsum<<" "<<maxcount<<endl;
	}
}


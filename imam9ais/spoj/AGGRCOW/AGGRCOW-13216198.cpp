#include<bits/stdc++.h>
using namespace std;
int ar[100004];
int canbe(int dist,int tot,int n)
{
		int last=0;
		int pos=1;int count=1;
		while(pos<n)
		{
			//cout<<pos<<" "<<ar[pos]<<" "<<endl;
			if(ar[pos]-ar[last]>=dist)
			{
			//	cout<<pos<<" "<<last<<endl;
				count++;last=pos;
			}
			pos++;
			if(count==tot)
				return 1;
		}
		return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;int c;
		scanf("%d %d",&n,&c);
		for(int i=0;i<n;i++)
		cin>>ar[i];
		sort(ar,ar+n);
		int beg=0;int end=ar[n-1]-ar[0];int re=beg;
		while(beg<=end)
		{
			int mid=beg+(end-beg)/2;
			if(canbe(mid,c,n))
			{
				re=mid;beg=mid+1;
			}
			else
			{
				end=mid-1;
			}
		}
		printf("%d\n",re);
	}
	
}

	

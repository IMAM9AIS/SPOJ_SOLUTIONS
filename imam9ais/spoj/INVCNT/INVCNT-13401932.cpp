#include<bits/stdc++.h>
using namespace std;
int ar[2000000];
long long int tot;
int done=0;
void combine(int ar[],int beg,int mid,int end)
{
	//cout<<"combine"<<beg<<" "<<mid<<" "<<mid+1<<" "<<end<<endl;
	vector<int> v;
	int i=beg;int j=mid+1;
	while(i<=mid && j<=end)
	{
		if(ar[i]>ar[j])
		{
		
				tot+= (long  long int)mid-(long long int)i+1;
				done=1;
			v.push_back(ar[j]);
			j++;
		}
		else
		{
			v.push_back(ar[i]);
			i++;
		}
	}
	while(i<=mid)
	{
		v.push_back(ar[i]);
		i++;
	}
	while(j<=end)
	{
		v.push_back(ar[j]);
		j++;
	}
	int k=beg;
	for(int i=0;i<v.size();i++)
		ar[k++]=v[i];
	
}
void merge(int ar[],int beg,int end)
{
	if(end-beg==0)
		return ;
	else if(end-beg==1)
	{
		int a=ar[beg];int b=ar[end];
		if(a>b)
			tot++;
		ar[beg]=min(a,b);
		ar[end]=max(a,b);
		return ;
	}
	else
	{
		int mid=(beg+end)/2;
		merge(ar,beg,mid);
		merge(ar,mid+1,end);
		done=0;
		combine(ar,beg,mid,end);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&ar[i]);
		merge(ar,0,n-1);
		printf("%lld\n",tot);
		tot=0;
	}
}


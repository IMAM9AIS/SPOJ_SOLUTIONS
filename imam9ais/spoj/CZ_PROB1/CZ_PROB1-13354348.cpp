#include<bits/stdc++.h>
using namespace std;
vector<int> list1;
void put(int s1,int e1)
{
			vector<int> prime;
	int n,m;n=s1;m=e1;
	int num=sqrt(m);
	int ar[num+1];memset(ar,0,sizeof(ar));
	int i;
	int limit=sqrt(num);
	for(i=2;i<=limit;i++){
		if(ar[i]==0){
		int t=i*i;int k=0;
		while(t<=num){
		ar[t]=1;k++;
		t=(i*i)+ k*i;
		}
		}
	}
	for(i=2;i<=num;i++){
	if(ar[i]==0)
		prime.push_back(i);}
	
	int sz=prime.size();int s=m-n+1;
	int re[s];memset(re,0,sizeof(re));
	for(i=0;i<sz;i++)
	{
		int t=prime[i];
		int te=n/t;
		int next=te*t;
		if(next<n)
			next=next+t;
		while(next<=m)
		{
			if(next!=t)
				re[next-n]=1;
			next=next+t;
		}
	}
	for(i=0;i<s;i++)
	{
		if(re[i]==0 && (n+i)!=1)
			list1.push_back(n+i);
	}
}
int issquare(int n)
{
	for(int i=1;i<=n;i++)
	{
		int z=i;
		z= n-z*z;
		if(z<0)
			return 0;
		int a= floor(sqrt(z));
		if(z== a*a)
			return 1;
	}
}

int  finallist[508];
void put1()
{
	int n=0;int i=0;
	while(n!=503)
	{
		int a=list1[i];
		if(issquare(a))
		{
			finallist[n]=a;
			n++;
		}
		i++;
	}
}
long long  dp[8100][5];
long long   number(int n,int k)
{
	if(n==0){
		dp[n][k]=1;
		return 1;
	}
	else if(dp[n][k])
		return dp[n][k];
	else
	{
		long long int temp=0;
		for(int i=k;i>0;i--)
		{
			if(n-i>=0)
			{
				if(!dp[n-i][i])
					dp[n-i][i]=number(n-i,i);
			temp=temp+dp[n-i][i];
			}
		}
		dp[n][k]=temp;
		return dp[n][k];
	}

}

int main()
{
	put(1,8000);
	put1();	
	memset(dp,0,sizeof dp);	

	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int t=finallist[n-1];
		long long  ans=number(t,k);
		printf("%lld\n",ans);
	}
	return 0;
}


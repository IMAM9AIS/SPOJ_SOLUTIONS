#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;while(t--){
		vector<int> prime;
	int n,m;cin>>n>>m;
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
			cout<<n+i<<endl;
	}
	
	
	cout<<endl;	
	
	}
	return 0;

}


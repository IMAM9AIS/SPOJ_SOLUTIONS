#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
void multiply(ll F[2][2],ll M[2][2],ll c)
{
	ll x =  (F[0][0]*M[0][0])%c + (F[0][1]*M[1][0])%c;
	  ll y =  (F[0][0]*M[0][1])%c + (F[0][1]*M[1][1])%c;
  	ll z = ( F[1][0]*M[0][0])%c + (F[1][1]*M[1][0])%c;
  	ll w =  (F[1][0]*M[0][1])%c + (F[1][1]*M[1][1])%c;
 
  	F[0][0] = x;
  	F[0][1] = y;
  	F[1][0] = z;
 	 F[1][1] = w;
}
void power(ll f[2][2],ll n)
{
	if(n==0 || n==1)
		return ;
	ll m[2][2]={{1,1},{1,0}};
	ll c=1000000007;
	power(f,n/2);
	multiply(f,f,c);
	if(n%2!=0)
		multiply(f,m,c);
}
ll fibo(ll n)
{
	ll f[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	power(f,n-1);
	return f[0][0];
}
int main()
{
	int t;
	scanf("%d",&t);ll mod=1000000007;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		long long int ans=(fibo(m+2)-fibo(n+1))%mod;
		if(ans<0)
			ans=ans+mod;
		ans=ans%mod;
		cout<<ans<<endl;
	}
	return 0;
}




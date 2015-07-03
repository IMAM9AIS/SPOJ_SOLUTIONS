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
void power(ll f[2][2],ll n,ll c)
{
        if(n==0 || n==1)
                return ;
        ll m[2][2]={{1,1},{1,0}};
        power(f,n/2,c);
        multiply(f,f,c);
        if(n%2!=0)
                multiply(f,m,c);
}
ll fibo(ll n,ll a,ll b,ll c)
{
        ll f[2][2]={{1,1},{1,0}};
        if(n==0)
                return a;
        if(n==1)
                return b;
        power(f,n-1,c);
        return (f[0][0]*b + f[0][1]*a);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	ll a,b,n,m;
	cin>>a>>b>>n>>m;
	ll sum= (fibo(n+1,a,b,m))%m;
	sum=sum-b;
	sum=sum%m;
	if(sum<0)
		sum=sum+m;
	cout<<sum<<endl;
	
	}
	
	
	
}

	

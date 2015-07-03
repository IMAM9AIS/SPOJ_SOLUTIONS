#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void multiply(ll F[2][2],ll M[2][2]);

void power(ll F[2][2],ll n);

/* function that returns nth Fibonacci number */
long long int fib(ll n)
{
   ll F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

/* Optimized version of power() in method 4 */
void power(ll F[2][2],ll n)
{
  if( n == 0 || n == 1)
      return;
  ll M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);


}

void multiply(ll F[2][2],ll M[2][2])
{
  ll x =  (F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod;
  ll y =  (F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod;
  ll z =  (F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod;
  ll w =  (F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;

   F[0][0]%=1000000007;
   F[0][1]%=1000000007;
   F[1][1]%=1000000007;
   F[1][0]%=1000000007;
}

/* Driver program to test above function */
int main()
{
  int t;
  ll m,n;
  long long int sum;
  scanf("%d",&t);
  while(t--){
        scanf("%lld%lld",&n,&m);sum=0;
    
        sum=(fib(m+2)-fib(n+1))%mod;
        if(sum<0)
                sum+=1000000007;
    
   printf("%lld\n",sum);
}
  return 0;
}


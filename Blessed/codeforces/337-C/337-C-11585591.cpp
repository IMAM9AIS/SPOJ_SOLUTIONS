#include <bits/stdc++.h>
#define gc getchar
#define line() printf("\n")
//#define mod 1000000007
#define mp make_pair
#define pb push_back
#define pc putchar
#define space() printf(" ")
typedef long long int lli;
using namespace std;
void sc(int& a){scanf("%d",&a);}
void sc(int& a, int& b){sc(a);sc(b);}
void sc(int& a,int& b,int& c){sc(a);sc(b);sc(c);}
void sc(lli& a){scanf("%lld",&a);}
void sc(lli& a,lli& b){sc(a);sc(b);}
void sc(lli& a,lli& b,lli& c){sc(a,b);sc(c);}
void write(int a){printf("%d",a);}
void write(lli a){printf("%lld",a);}
lli mod=1000000009;
lli modpow(lli a, lli b, lli mod){lli res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b=b/2;}return res%mod;} 
int main()
{
    lli n,m,k,ans=0;
    int i;
    sc(n,m,k);
    if(m==0) { cout<<0<<endl; return 0;}
    if(m<=n-(n/k)) { cout<<m<<endl; return 0;}
    lli max1=n-(n/k);
    lli rem=m-max1;
    ans=(k*2*(modpow(2,rem,mod)-1))%mod;
    ans=(ans+max(lli(0),m-rem*k))%mod;
    cout<<ans<<endl;
}
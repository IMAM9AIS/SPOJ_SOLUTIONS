#include<bits/stdc++.h>
using namespace std;
#define pp pair<long long ,long long>
int is_prime( int n ){

    for( int i = 2 ; i <= sqrt(n); i++ ){

        if( n%i == 0 ){ return false;}

    }

    return true;
}

int main( )
{

long long int n,k;

while( 1 ){

    scanf("%lld",&n);

    if( !n ){break;}

    for(long long   i = 2 ; i*i <= n   ;i++ ){

            k = 0;
        long long  m=n;
            while(m%i==0){
            m=m/i;
            k++;
            }
            n=m;
        if(k!=0)
                printf("%lld^%lld ",i,k);

    }
    if(n>1)
            printf("%lld^1 ",n);
    printf("\n");



}
return 0;
}

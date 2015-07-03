#include<bits/stdc++.h>
using namespace std;

#define max 1000001

bool is_prime[10000001] = { 0 } ;
int prime[1000001];
int k = 0;
bool pop_primes[1000001];

void seive( int n){

    for( int i = 2 ;i <= sqrt(n) ;i++){

            if( !is_prime[i] ){

                for( int j = i*i ; j <= n ; j+=i ){

                        is_prime[j]=1;
                }



            }

    }

for ( int  i = 2; i <= n ; i++ ){

    if(!is_prime[i]){
        prime[k] = i;k++;
    }
}
}


int main( ){


    //seive( (int)sqrt(1000000001) );
    //cout<<sqrt(1000000000);
    long long int n,m,i,t;
    scanf("%lld",&t);
    while( t-- ){

            scanf("%lld%lld",&m,&n);
            memset( pop_primes , 0 ,sizeof pop_primes );
            memset( is_prime , 0 ,sizeof is_prime );
            k = 0;
            seive(sqrt(n));
            for( int i = 0 ;  (i < k ); i++ ){

                    int x = prime[i];

                    int t = (m/x) ;
                        t*=x;

                    for ( int j = t ; j <= n ;j+=x ){

                        if( j < m ){ continue ; }
                            if( j!=x )
                            pop_primes[j-m] = 1;
                    }

            }

            for(  i = 0 ; (i + m ) <= n ; i++ ){

                    if(!pop_primes[i] && ( i+m )!= 1  ){
                        cout<<i+m<<endl;
                    }

            }
    }
    return 0;
}

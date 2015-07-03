#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
int dp[2][2000001]={0};
int v[501];
int w[501];
void scanint(int &k)
{
    register int c = gc();
    k = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {k = (k<<1) + (k<<3) + c - 48;}
}
int main()
{
        int k,n,i,wl;
        scanint(k);scanint(n);
        for( i=0;i<n;i++)
           {    scanint(v[i]);scanint(w[i]);}
        int curr,next;
        curr=1;next=0;
        for( i=n-1;i>=0;i--)
        {
                for( wl=0;wl<=k;wl++)
                {

                         if(w[i]>wl)
                                dp[curr][wl]=dp[next][wl];
                        else
                                dp[curr][wl]=max(v[i]+dp[next][wl-w[i]],dp[next][wl]);
                }
                curr=1-curr;
                next=1-next;
        }
        printf("%d\n",dp[next][k]);
        return 0;
}


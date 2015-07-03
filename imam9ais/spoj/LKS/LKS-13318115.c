#include<stdio.h>
#define max(a,b) a>b?a:b;
int dp[2][2000001]={0};
int v[501];
int w[501];
int main()
{
        int k,n;
        scanf("%d %d",&k,&n);

        int i,wl;
        for( i=0;i<n;i++)
                scanf("%d %d",&v[i],&w[i]);
	int curr,next;
	curr=1;next=0;
        for( i=n;i>=0;i--)
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





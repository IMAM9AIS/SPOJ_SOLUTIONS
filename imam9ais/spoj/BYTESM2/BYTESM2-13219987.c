#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define max(a,b) a>b?a:b;
int ar[105][105];

int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
                int r,c;int i,j;
                scanf("%d %d",&r,&c);
 //               int ar[105][105];
                for( i=0;i<r;i++)
                        for( j=0;j<c;j++)
                                scanf("%d",&ar[i][j]);

                int max2=INT_MIN;
                for( i=r-2;i>=0;i--)
                {
                        for( j=0;j<c;j++)
                        {
                                int     max1=ar[i][j];
                                if((j-1)>=0)
                                        max1=max(max1,ar[i][j]+ar[i+1][j-1]);
                                if((j+1)<c)
                                        max1=max(max1,ar[i][j]+ar[i+1][j+1]);
                                max1=max(max1,ar[i][j]+ar[i+1][j]);

                                ar[i][j]=max1;
                                max2=max(max2,ar[i][j]);
                        }
                }
                printf("%d\n",max2);
        }
        return 0;
}

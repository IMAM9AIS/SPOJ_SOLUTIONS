#include<stdio.h>
int ar[15]={0,0,
6,
12,
90,
360,
2040,
10080,
54810,
290640,
1588356,
8676360,
47977776,
266378112,
1488801600};
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
                int n;
                scanf("%d",&n);
                printf("%d\n",ar[n]);
        }
        return 0;
}


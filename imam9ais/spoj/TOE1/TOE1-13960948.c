#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    char tic[5][5];
    while(t--)
    {
        int count_X=0,count_O=0;
        for(i=0;i<3;i++)
            scanf("%s",tic[i]);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(tic[i][j]=='X')  
                    count_X+=1;
                if(tic[i][j]=='O')
                    count_O+=1;
                    
            }
        }
        int win_X=0,win_O=0;
        if(tic[0][0]==tic[0][1]&&tic[0][1]==tic[0][2]&&tic[0][0]!='.')
        {
            if(tic[0][0]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[1][0]==tic[1][1]&&tic[1][1]==tic[1][2]&&tic[1][0]!='.')
        {
            if(tic[1][0]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[2][0]==tic[2][1]&&tic[2][1]==tic[2][2]&&tic[2][0]!='.')
        {
            if(tic[2][0]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[0][0]==tic[1][0]&&tic[1][0]==tic[2][0]&&tic[0][0]!='.')
        {
            if(tic[0][0]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[0][1]==tic[1][1]&&tic[1][1]==tic[2][1]&&tic[0][1]!='.')
        {
            if(tic[0][1]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[0][2]==tic[1][2]&&tic[1][2]==tic[2][2]&&tic[0][2]!='.')
        {
            if(tic[0][2]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[0][0]==tic[1][1]&&tic[1][1]==tic[2][2]&&tic[0][0]!='.')
        {
            if(tic[0][0]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
        if(tic[0][2]==tic[1][1]&&tic[1][1]==tic[2][0]&&tic[0][2]!='.')
        {
            if(tic[0][2]=='X')
                win_X+=1;
            else
                win_O+=1;
        }
 int temp=win_X;
 //printf("%d %d",win_X,win_O);
        if(win_X==0&&win_O==0)
        {
            if(count_X==count_O||count_X==count_O+1)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(win_X==1&&win_O==0)
        {
            if(count_X==count_O+1)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(win_X==0&&win_O==1)
        {
            if(count_X==count_O)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(win_X==2)
        {
            if(count_X==count_O+1)
                printf("yes\n");
            else
                printf("no\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
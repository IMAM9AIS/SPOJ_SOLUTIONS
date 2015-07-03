#include<stdio.h>
#include<stdlib.h>
unsigned long long int
pow1(unsigned long long int a,unsigned long long int b,unsigned long long int mod)
{
unsigned long long int val;
unsigned long long int t;
if (b==0)
return 1;
if (a==0)
return 0;
if(b==1)
return (a%mod);
t=pow1(a,b/2,mod); 
val=(t*t)%mod;
if(b%2)
{
val=(val*a)%mod;
}
t=val;
return t;
}

int
main ()
{
int t, n, m=0;
int a,b,c;
scanf ("%d %d %d", &a,&b,&c);
while(1)
{
if((a==-1)&&(b==-1)&& (c==-1))
break;
int val=pow1(b,c,1000000006);
if(b==0 && c!=0)
{
printf("1\n");
}
else if((a%1000000007)==0)
{
printf("0\n");
}
else
{
m=pow1(a,val,1000000007);
printf("%d\n",m);
}
scanf ("%d %d %d", &a,&b,&c);
}


return 0;
}

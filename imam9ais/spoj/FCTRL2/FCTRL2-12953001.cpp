#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--){
        int ar[200];
        memset(ar,0,sizeof(ar));
        ar[199]=1;
        int num;
        cin>>num;
        int i;int count=0;
        for(i=1;i<=num;i++)
        {

                int k;int c=0;
                for(k=199;k>=1;k--)
                {
                int n1=ar[k];
                int mul=n1*i+c;
                ar[k]=mul%10;
                c=mul/10;
                }
                while(c!=0)
                {
                int te=c%10;
                ar[k]=te;
                k--;c=c/10;
                }
        }
        int k=0;
        while(ar[k]==0)
                k++;
        while(k<200)
        {               cout<<ar[k];k++;}
        cout<<endl;
        }

}

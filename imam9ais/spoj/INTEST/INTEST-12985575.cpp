#include<bits/stdc++.h>
using namespace std;
void scanint( int &x)
{
        register int c= getchar_unlocked();
        x=0;
        for(;c>47 && c<58;c=getchar_unlocked())
        {
        x=(x<<1)+(x<<3) + c-48;
        }

}
int main()
{
         int n,k;
        scanint(n);scanint(k);
        int i;int c=0;
        for(i=1;i<=n;i++){
        int num;scanint(num);
                if(num%k==0)
                c++;
        }
        cout<<c<<endl;
}
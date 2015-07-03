#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int t;
        scanf("%lld",&t);
        while(t--)
        {
                long long int n,s;
                s=0;
                scanf("%lld",&n);
                long long int i=n;
                while(i--)
                {
                        long long int k;scanf("%lld",&k);
                        s=s+k;

                        if(s>=n)
                        {
                        s=s%n;
                        }
                }

                if(s==0)
                        cout<<"YES"<<endl;
                else
                        cout<<"NO"<<endl;
        }
        return 0;
}

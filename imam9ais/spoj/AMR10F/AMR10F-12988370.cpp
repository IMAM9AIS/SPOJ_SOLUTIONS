#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;cin>>t;
        while(t--)
        {
                int n,a,d;
                cin>>n>>a>>d;
                int s=a;
                int i;
                for(i=2;i<=n;i++)
                {
                        a=a+d;
                        s=s+a;
                }
                cout<<s<<endl;
        }
        return 0;
}
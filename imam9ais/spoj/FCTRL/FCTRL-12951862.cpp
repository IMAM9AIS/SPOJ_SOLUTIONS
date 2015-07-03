#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;cin>>t;while(t--){
        unsigned long long int n,count=0,temp;
        cin>>n;
        while(n)
        {
                count=count+n/5;
                n=n/5;
        }
        cout<<count<<endl;
        }




}

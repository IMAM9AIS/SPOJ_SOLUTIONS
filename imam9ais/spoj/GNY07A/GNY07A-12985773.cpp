#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;int j=1;
        while(t--)
        {
                int n;
                scanf("%d",&n);
                string s;
                cin>>s;
                string re="";int i;
                for(i=0;i<s.length();i++)
                {
                        if(i!=n-1)
                        {
                                char ch=s[i];string tmp(1,ch);re=re+tmp;
                        }
                }
                cout<<j<<" "<<re<<endl;
                j++;
        }
        return 0;
}

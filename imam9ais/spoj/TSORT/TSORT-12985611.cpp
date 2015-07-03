#include<bits/stdc++.h>
using namespace std;
void scanint(int &x)
{
        register int c=getchar_unlocked();
        x=0;
        for(;c>=47 && c<=58;c=getchar_unlocked())
        {
                x=(x<<1)+(x<<3)+c-48;
        }
}


int main()
{

                int n;scanint(n);vector<int> v;
                while(n--)
                {
                        int k;
                        scanint(k);
                        v.push_back(k);
                }
                sort(v.begin(),v.end());
                int i;
                for(i=0;i<v.size();i++)
                        printf("%d\n",v[i]);
}

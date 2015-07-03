#include<bits/stdc++.h>
using namespace std;
int main()
{
        int g,b;
        while(1)
        {
                cin>>g>>b;
                if(g==-1)
                        break;
                int t1=max(g,b);
                int t2=min(g,b)+1;
                int t3=(int) ceil((float)t1/(float)t2);
                cout<<t3<<endl;

        }
}
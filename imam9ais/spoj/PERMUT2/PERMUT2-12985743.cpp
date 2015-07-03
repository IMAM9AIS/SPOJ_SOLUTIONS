#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t!=0)
        {
                int i;vector<int> v;
                for(i=0;i<t;i++)
                {
                        int k;scanf("%d",&k);
                        v.push_back(k);
                }
                int y=1;
                for(i=0;i<t;i++)
                {
                        int pos=v[i];
                        if(v[pos-1]!=(i+1))
                        {
                                y=0;
                                break;
                        }
                }
                if(!y)
                        printf("not ambiguous\n");
                else
                        printf("ambiguous\n");
                cin>>t;
        }
        return 0;

}

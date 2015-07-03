#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
                int n;
                scanf("%d",&n);
                string s;
                cin>>s;
                int i=0;
                vector<string> v;vector<int> ans;ans.pb(n);
                v.pb("TTT");v.pb("TTH");v.pb("THT");v.pb("THH");v.pb("HTT");
                v.pb("HTH");v.pb("HHT");v.pb("HHH");
//              int i;
                for(i=0;i<v.size();i++)
                {
                        int pos=0;int c=0;
                        while(pos<=37)
                        {
                                string sb=s.substr(pos,3);
                                if(sb==v[i])
                                        c++;
                                pos++;
                        }
                        ans.pb(c);
                }
                for(i=0;i<ans.size();i++)
                {
                        cout<<ans[i]<<" ";
                }
                cout<<endl;
        }
        return 0;
}
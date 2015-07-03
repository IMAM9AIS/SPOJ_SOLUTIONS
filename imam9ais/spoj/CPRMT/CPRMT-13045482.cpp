#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	while(cin>>a>>b)	
	{
			 int ar[256];memset(ar,0,sizeof(ar));int ar2[256];
        		memset(ar2,0,sizeof(ar2));
			 int i=0;while(i<a.length())
                {
                        ar[a[i]]++;
                        i++;
                }
                i=0;
                while(i<b.length())
                {
                        ar2[b[i]]++;
                        i++;
                }
                for(i=0;i<256;i++)
                {
                        if(ar[i]>0 && ar2[i]>0)
                        {
                                int t=min(ar[i],ar2[i]);
                                while(t--)
                                        cout<<(char)i;
                        }

                }
                cout<<endl;
	}
	return 0;
}


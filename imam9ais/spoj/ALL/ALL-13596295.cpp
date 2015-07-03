#include<bits/stdc++.h>
#define rep(i,n) for( int (ii)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
typedef long long ll;
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
VI v[100008];
VI v1[100008];
int n1;
int n2;
int depend1[100008];
int depend2[100008];
int do1(int ca)
{
	Q qi[2];int i;
	for(i=1;i<=n1;i++)
	{
		if(depend1[i]==0){
			qi[0].push(i);
		}
	}
	for(int i=n1+1;i<=n1+n2;i++)
	{
		if(depend1[i]==0){
			qi[1].push(i);
		}
	}
	int curr=ca;int count=1;
	while(!(qi[0].empty())|| !(qi[1].empty()))
	{
		while(!qi[curr].empty())
		{
			int a=qi[curr].front();
			qi[curr].pop();
			int s=v[a].size();
			int i;
			for(i=0;i<s;i++){
			int t=v[a][i];
			depend1[t]--;
			if(depend1[t]==0)
			{
				if(t<=n1)qi[0].push(t);
				else
				qi[1].push(t);
			}
			}
			v[a].clear();
		}	
		curr=1-curr;
		count++;
	}
	
	return count;
}
int do2(int ca)
{
        Q qi[2];int i;
        for(i=1;i<=n1;i++)
        {
                if(depend2[i]==0){
                        qi[0].push(i);
                }
        }
        for(int i=n1+1;i<=n1+n2;i++)
        {
                if(depend2[i]==0){
                        qi[1].push(i);
                }
        }
        int curr=ca;int count=1;
        while(!(qi[0].empty())|| !(qi[1].empty()))
        {
                while(!qi[curr].empty())
                {
                        int a=qi[curr].front();
                        qi[curr].pop();
                        int s=v1[a].size();
                        int i;
                        for(i=0;i<s;i++){
                        int t=v1[a][i];
                        depend2[t]--;
			if(depend2[t]==0){
                        if(t<=n1)qi[0].push(t);
                        else
                                qi[1].push(t);
                        }
			}
                        v1[a].clear();
                }
                curr=1-curr;
                count++;
        }
        return count;
}
	
		
int main()
{
	while(1)
	{
	int d;
	scanint(n1);
	scanint(n2);
	scanint(d);
		if(n1==0 && n2==0 && d==0)break;
	int i;
	for(int i=1;i<=d;i++)
	{
		int s,d1;scanint(s);scanint(d1);
		v[d1].pb(s);
		v1[d1].pb(s);
		depend1[s]++;
		depend2[s]++;
	}
	int a=do1(0);
	int b=do2(1);
	printf("%d\n",min(a,b));
	}
	
}
	
	

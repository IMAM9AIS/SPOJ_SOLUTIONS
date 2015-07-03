#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
struct node
{
        int index;
        int rank[2];
};
int comp(struct node a,struct node b)
{
        if(a.rank[0]!=b.rank[0])
                return a.rank[0]<b.rank[0];
        else
                return a.rank[1]<b.rank[1];
}
int l;
void construct(struct node ar[])
{
        int hash[l];
        for(int k=4;k<2*l;k=k*2)
        {
                int prev=ar[0].rank[0];
                ar[0].rank[0]=0;
                int rank=0;
                hash[ar[0].index]=0;
                for(int i=1;i<l;i++)
                {
                        if(ar[i].rank[0]==prev && ar[i].rank[1]==ar[i-1].rank[1])
                        {
                                prev=ar[i].rank[0];
                                ar[i].rank[0]=ar[i-1].rank[0];
                        }
                        else
                        {
                                prev=ar[i].rank[0];
                                ar[i].rank[0]=ar[i-1].rank[0]+1;
                        }
                        hash[ar[i].index]=i;
                }
                for(int i=0;i<l;i++)
                {
                        int next=ar[i].index+k/2;
                        ar[i].rank[1]=next<l?ar[hash[next]].rank[0]:-1;
                }
                sort(ar,ar+l,comp);
        }
}
int main()
{
	int t;
	s(t);
	while(t--)
	{
		string s;
        	cin>>s;
       		  l=s.length();
		struct node ar[l];
       		 rep(i,l)
        	{
                ar[i].index=i;
                ar[i].rank[0]=s[i];
                if(i!=l-1)
                ar[i].rank[1]=s[i+1];
                else
                ar[i].rank[1]=-1;
        	}
        	sort(ar,ar+l,comp);
       			 construct(ar);
		int st=ar[0].index;
		vector<int> lcp(l,0);
		vector<int> rank(l,0);
		rep(i,l)
			rank[ar[i].index]=i;
		int k=0;
		for(int i=0;i<l;i++,k?k--:0)
		{
			if(rank[i]==l-1)
			{
				k=0;continue;
			}
			int j=ar[rank[i]+1].index;
			while(i+k<l && j+k<l && s[i+k]==s[j+k])k++;
			lcp[rank[i]]=k;
		}
		long long si=0;
		rep(i,l)
		{
			si=si+lcp[i];
		}
		long long  ans= (l*(l+1))/2-si;
		cout<<ans<<endl;

			
	}
}

			
			

#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",&n)
#define pll(n) printf("%d",&n)
typedef long long ll;
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int r;
int c;
int up[25][25];
int down[25][25];
int right1[25][25];
int left1[25][25];
ll ans;
ll mincost[25][25];
struct node
{
	int x;
	int y;
};
void djkstra()
{
	struct node p;
	p.x=0;
	p.y=0;
	queue<struct node> q;
	q.push(p);
	rep(i,25)
		rep(j,25)
			mincost[i][j]=INT_MAX;
	mincost[0][0]=0;
	while(!q.empty())
	{
		struct node t;
		t=q.front();q.pop();
		int a=t.x;int b=t.y;
		if(1)
		{
			if(up[a][b] && mincost[a-1][b]>(mincost[a][b]+(2520/up[a][b])))
			{	mincost[a-1][b]=mincost[a][b]+ (2520/up[a][b]);
				struct node t1;
				t1.x=a-1;t1.y=b;q.push(t1);
			}
			if(down[a][b] && mincost[a+1][b]>mincost[a][b]+ (2520/down[a][b]))
			{
				mincost[a+1][b]=mincost[a][b]+ (2520/down[a][b]);
			struct node t1;
			t1.x=a+1;t1.y=b;
				q.push(t1);
			
			}
			if(right1[a][b] && mincost[a][b+1]>mincost[a][b]+ (2520/right1[a][b]))
			{
				mincost[a][b+1]=mincost[a][b]+ (2520/right1[a][b]);
				struct node t1;
				t1.x=a;t1.y=b+1;
				q.push(t1);
			}
			
			if(left1[a][b] && mincost[a][b-1]>mincost[a][b]+ (2520/left1[a][b]))
			{
				mincost[a][b-1]=mincost[a][b]+ (2520/left1[a][b]);
			struct node t1;
				t1.x=a;t1.y=b-1;
				q.push(t1);
			}
			
		}
	}
	
}
	
int main()
{
	while(1)
	{
		memset(up,0,sizeof up);
		memset(down,0,sizeof down);
		memset(right1,0,sizeof right1);
		memset(left1,0,sizeof left1);
		
	scanint(r);
	scanint(c);
		if(r==0)break;
	r++;
	c++;
	rep(i,r){
		rep(j,c-1){
		//cout<<"for"<<i<<j<<endl;
		int d;scanint(d);
		char ch;scanf("%c",&ch);
		if(ch=='*')
		{
			right1[i][j]=d;
			left1[i][j+1]=d;
		}
		else if(ch=='>')
		{
			right1[i][j]=d;
			left1[i][j]=0;
		}
		else if(ch=='<')
		{
			left1[i+1][j]=d;
			right1[i][j]=0;
		}
		}
		if(i==r-1)break;
		rep(j,c)
		{
			//cout<<"for"<<i<<j<<endl;
			int d;scanint(d);char ch;scanf("%c",&ch);
			if(ch=='*')
			{
				down[i][j]=d;
				up[i+1][j]=d;
			}
			else if(ch=='v')
			{
				down[i][j]=d;
				up[i][j]=0;
			}
			else if(ch=='^')
			{
				down[i][j]=0;
				up[i+1][j]=d;
			}
		}
	}
	djkstra();
	ans=mincost[r-1][c-1];
	if(ans!=INT_MAX)
	printf("%lld blips\n",ans);
	else
	printf("Holiday\n");
		
	}
	
		
}

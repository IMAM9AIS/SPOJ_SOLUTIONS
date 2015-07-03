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
typedef long long ll;
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int row;
int col;
int ar[105][105];
struct node
{
	int r;
	int c;
	int mask;
	int step;
};
int sti;
int stj;
int dx[]={1,-1,0};
int dy[]={1,-1,0};
int  bfs()
{
	struct node p;
	p.r=sti;p.c=stj;
	p.mask=0;p.step=0;	
	queue<struct node> q;
	int visited[105][105][1<<4];
	memset(visited,0,sizeof visited);
	q.push(p);visited[sti][stj][0]=1;
	while(!q.empty())
	{
		struct node p;
		p=q.front();q.pop();
		int x=p.r;int y=p.c;int m=p.mask;
		rep(i,3)
		{
			rep(j,3)
			{
				if(!(dx[i]&&dx[j]))
				{
					int tox=x+dx[i];
					int toy=y+dy[j];
					int m1=m;
					int select=1;
					if(tox>=0 && tox<row && toy>=0 && toy<col)
					{
						char ch=ar[tox][toy];
						if(ch=='r'||ch=='g'||ch=='b'||ch=='y')
						{
							int choice;
							if(ch=='r')choice=0;if(ch=='g')choice=1;if(ch=='b')choice=2;if(ch=='y')choice=3;
							 m1=(m|(1<<choice));
						}
						else if(ch=='R'||ch=='G'||ch=='B'||ch=='Y')
						{
							int choice;
							if(ch=='R')choice=0;if(ch=='G')choice=1;if(ch=='B')choice=2;if(ch=='Y')choice=3;
							if(!(m&(1<<choice)))
								select=0;	
						}
						else if(ch=='#')
							select=0;
						else if(ch=='X')
							return p.step+1;

						if(select && !visited[tox][toy][m1])
						{
							struct node t;t.r=tox;t.c=toy;t.mask=m1;t.step=p.step+1;
							q.push(t);	
							visited[tox][toy][m1]=1;
						}
					}
				}
			}
		}
	}
	return 0;
}
					
				
int main()
{
	while(1)
	{
	scanint(row);scanint(col);
		if(row==0)break;
	rep(i,row)
	{
		string s;
		cin>>s;
		rep(j,s.length())
		{
			char ch=s[j];
			ar[i][j]=ch;
			if(ch=='*')
			{	sti=i;stj=j;}
		}
	}
	int f=bfs();
	if(f)
	{
		printf("Escape possible in %d steps.\n",f);
	}
	else
	{
		printf("The poor student is trapped!\n");
	}
	}

}



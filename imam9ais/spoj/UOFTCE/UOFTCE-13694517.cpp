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
#define p(n) printf("%d",n)
#define pll(n) printf("%d",n)
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
char ar[1005][1005];
int visited[1005][1005];
int dx[]={1,-1,0};
int dy[]={1,-1,0};
int valid(int i,int j)
{
	if(i>=0 && i<r && j>=0 && j<c && ar[i][j]!='#'&& !visited[i][j])
		return 1;
	else
		return 0;
}
#define pp pair<int,pair<int,int> >
#define pp1 pair<int,int >
int bfs(int a,int b)
{
	queue<pp> q;
	q.push(pp(a,pp1(b,0)));
	int re=0;int step=0;
	vector<int> v;
	while(!q.empty())
	{
		int s=q.front().first;
		int t=q.front().second.first;
		int u=q.front().second.second;
//		visited[s][t]=1;
		//cout<<s<<" "<<t<<" "<<u<<endl;
		q.pop();
		if(ar[s][t]=='S')
			v.push_back(u);	
		visited[s][t]=1;int i,j;
		rep(i,3){
			rep(j,3){
					if(!(dx[i]&&dy[j])){
					int x=s+dx[i];int y=t+dy[j];
					if(valid(x,y)){
					q.push(pp(x,pp1(y,u+1)));visited[x][y]=1;}
					
					}
				
				}
			}
	}
	sort(v.begin(),v.end());
	int size=sz(v);
	re=size*60;int i;
	//cout<<size<<endl;
//	cout<<v[size-1]<<endl;
	rep(i,size-1)
	{
//		cout<<v[i]<<" ";
		re=re+ v[i]*2;
	}
//	cout<<v[size-1]<<endl;
	re=re+v[size-1];
	return re;
}
	
		
	
	
int main()
{
	int m;
	scanint(m);
	while(m--)
	{
		memset(visited,0,sizeof visited);
		scanint(r);scanint(c);int sti,stj,i,j;
		rep(i,r){
				string s;cin>>s;int l=s.length();
				rep(j,l){
				char ch=s[j];ar[i][j]=ch;if(ch=='C'){sti=i;stj=j;}
				}
			}
			int re=bfs(sti,stj);
			p(re);
			cout<<endl;
	}
}
			

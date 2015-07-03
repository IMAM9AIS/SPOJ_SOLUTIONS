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
#define pp pair<int,int>
#define pp1 pair<int,pair<int,int> >
typedef long long ll; 
using namespace std; 
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(!n)
			break;
		int p1,p2,p3;
		cin>>p1>>p2>>p3;char ar[100][100];p1--;p2--;p3--;
		rep(i,n)
		{
			rep(j,n){
				char ch;cin>>ch;ar[i][j]=ch;}
		}
		int state[100][100][100];
		rep(i,n)
		{	rep(j,n){
				rep(k,n){
					state[i][j][k]=n*n*n;
					}
				}
		}

		queue<pp1> q;
		q.push(pp1(p1,pp(p2,p3)));
		state[p1][p2][p3]=0;
		while(1)
		{
			if(q.empty())
			{
				cout<<"impossible"<<endl;
				break;
			}
			 p1=q.front().first;
			p2=q.front().second.first;
			p3=q.front().second.second;
			q.pop();
			if(p1==p2 && p1==p3)
			{
				cout<<state[p1][p2][p3]<<endl;
				break;
			}
			int d=state[p1][p2][p3]+1;
			rep(i,n)
			{
				if(ar[p1][i]==ar[p2][p3] && d<state[i][p2][p3])
				{state[i][p2][p3]=d;q.push(pp1(i,pp(p2,p3)));}
				if(ar[p2][i]==ar[p1][p3] && d<state[p1][i][p3])
				{state[p1][i][p3]=d;q.push(pp1(p1,pp(i,p3)));}
				if(ar[p3][i]==ar[p1][p2] && d<state[p1][p2][i])					{state[p1][p2][i]=d;q.push(pp1(p1,pp(p2,i)));}
			}
//			q.pop();
		}
	
	}
}
		
			
	

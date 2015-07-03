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
int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
    	int n; 	
    	s(n);
    	string s;
    	cin>>s;int fh=0;int sh=0;
    	rep(i,n)
    	{
    			char ch=s[i];
    			int t=ch-'0';
    			if(!(t==4 || t==7))
    			{
    					cout<<"NO"<<endl;
    					exit(0);
    			}
    			if(i<n/2)
    					fh=fh+t;
    			else
    					sh=sh+t;


    	}
    	if(fh==sh)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
}
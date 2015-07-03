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
#define endl '\n'
typedef long long ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
    	int n;
    	cin>>n;
   		int max1=n/4+1;ll c4=INT_MAX;ll c7=INT_MAX;
   		for(int i=0;i<=max1;i++)
   		{
   					int remsum=n-(4*i);
   					if(remsum%7==0)
   					{
   							int j=remsum/7;
   							if(i+j<c4+c7)
   							{
   									c4=i;c7=j;
   							}
   							else if(i+j== c4+c7 && (c4<i))
   							{
   									c4=i;c7=j;
   							}
   					}	
   			}
   			if(c4==INT_MAX && c7==INT_MAX)
   			{
   					cout<<"-1"<<endl;

   			}
   			else
   			{
   					while(c4--)
   							cout<<"4";
   					while(c7--)
   							cout<<"7";
   			}
   }
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
    	VI v;int ar[150];
    	rep(i,150)
    		ar[i]=0;
    	rep(i,n)
    	{
    			int a;
    			cin>>a;
    			v.pb(a);
    			ar[a]++;
    	}
    	SORT(v);
    	//rep(i,n)
    	//	cout<<v[i]<<" ";
    	//cout<<endl;
  		int c=0;
  		int pos=0;
  		while(1)
  		{
  				while(v[pos]==-1 && pos<n)
  						pos++;
  				if(pos==n)
  						break;
  		//		cout<<pos<<endl;
  				c++;
  				int l=1;
  				v[pos]=-1;
  				while(pos<n)
  				{	
  					while(v[pos]<l && pos<n)
  					pos++;

  					if(pos<n)
  					{	
  							//cout<<pos<<" ";
  							v[pos]=-1;
  							l++;
  					}
  					else
  							break;
  				}
  				pos=0;
  					

  		}
    
    cout<<c<<endl;
    		
    	//}
    	//cout<<n-c<<endl;
   }
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
#define pp pair<ll,ll> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
#define endl '\n'
typedef long long ll;
using namespace std;
int isprime[10000000+20];
ll mark[10000000+20];
ll f[10000000+20];
VP v;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		rep(i,10000000+9)
			isprime[i]=1;
		isprime[0]=isprime[1]=0;
		for(ll i=2;i<10000000+9;i++)
		{
				if(isprime[i])
				{
					//cout<<i<<" ";
					if(i*i*1LL< 10000000+9)
					{
							for(ll j=i*i;j<10000000+9;j+=i)
							{
										
									isprime[j]=0;
							}
					}
				}
		}
	
		int n;
		cin>>n;int maxnum=0;
		rep(i,n)
		{
				int a;
				cin>>a;
				maxnum=max(maxnum,a);
				mark[a]++;
		}
		int m;
		cin>>m;ll maxl=0;
		rep(i,m)
		{
			ll l,r;
			cin>>l>>r;

				v.pb(pp(l,r));
			maxl=maxl>r?maxl:r;

		}

		maxl=maxl<10000005?maxl:10000005;
		f[0]=f[1]=0;
		//cout<<"maxl"<<" "<<maxl<<endl;
		//cout<<maxl<<endl;
		//exit(0);
	//cout<<maxnum<<endl;
	//	cout<<maxl+1<<endl;
		//exit(0);

		for(ll i=2;i<maxl+2;i++)
		{
				//cout<<i<<" ";
				f[i]=0;
			if(isprime[i])
			{


				for(ll j=1;j*i<=maxnum;j++)
				{

					f[i]=f[i]+mark[j*i];
				}
				
			//cout<<f[i]<<" "<<i<<endl;
			}
			f[i]=f[i]+f[i-1];
		}
		
		/**if(n==479)
		{
				cout<<"maxnum"<<" "<<maxnum<<" maxl"<<maxl<<endl;
				exit(0);
		}
		*/
		//exit(0);
		rep(i,m)
		{
			ll l=v[i].first;
			ll r=v[i].second;
			r=r<10000002?r:10000002;
			//cout<<l<<" "<<r<<endl;
			//cout<<f[r]<<" "<<f[l-1]<<endl;
		//	cout<<l<<" "<<r<<endl;
			if(l>maxnum)
					cout<<"0"<<endl;
			else
			cout<<f[r]-f[l-1]<<endl;

		}
		
		
}
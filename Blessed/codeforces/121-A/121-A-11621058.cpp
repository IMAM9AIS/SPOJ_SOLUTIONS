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
		int l,r;
		cin>>l>>r;
		queue<ll> q;
		q.push(4);q.push(7);
		int b=l;ll sum=0;int fch=1;
		while(1)
		{
			ll take=q.front();
			q.pop();
			if(take<r && take>=l)
			{
					//cout<<take<<endl;
					//cout<<take<<" "<<b<<endl;
					if(fch){
						fch=0;
						sum=sum+1LL*(take)*(take-b+1);
					}
					else
						sum=sum+1LL*(take)*(take-b);

					q.push(1LL*take*10+4);
					q.push(1LL*take*10+7);
					b=take;
			}
			else if(take>=l && take>=r)
			{
					//cout<<take<<endl;
					if(fch){
						fch=0;
					sum=sum+1LL*(take)*(r-b+1);
				}
				else
					sum=sum+1LL*(take)*(r-b);


					break;
			}
			else{
					q.push(1LL*take*10+4);
					q.push(1LL*take*10+7);
			}
		}
		cout<<sum<<endl;
}
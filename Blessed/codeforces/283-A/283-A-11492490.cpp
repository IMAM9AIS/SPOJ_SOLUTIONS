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
int dif[500000+5];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		dif[0]=0;
		int n;
		cin>>n;
		double sum=0;
		double avg=0;
		int pos=0;int last=0;
		rep(i,n)
		{
				int t;cin>>t;
				if(t==1)
				{
						int a;cin>>a;double x;cin>>x;
						if(pos>0 && pos+1!=a)
							dif[a-1]+=x;
						if(pos+1==a)
								last+=x;
						sum=sum+(double)(a*x);
						

				}
				if(t==2)
				{
						double k;cin>>k;
						dif[pos]=last-k;
						last=k;
						pos++;
						sum+=k;
				}
				if(t==3)
				{
					if(pos>=1){
						sum=sum-last;
						pos--;
						last=last+dif[pos];
					}

				}
				//cout<<sum<<" "<<last<<endl;

				double avg=sum/(double)(pos+1);
				printf("%.6f\n",avg);
				
		}
	}
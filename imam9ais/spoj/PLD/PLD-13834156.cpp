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
void scanint(int &x)
{   
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
    str[i] = '\0';
}
char s[30006];
int d1[30006];
int d2[30006];
int n;
void makeven()
{
	int l=0;int r=-1;
	rep(i,n)
	{
		int k=(i>r?1:(min(d2[l+r-i+1],r-i+1)));
		while(i-k>=0 && i+k-1<n && s[i-k]==s[i+k-1])
			k++;
		d2[i]=--k;
		if(i+k-1>r)
		{
			l=i-k;
			r=i+k-1;
		}
	}
}
void makeodd()
{
	int l=0;int r=-1;
	rep(i,n)
	{
		int k=((i>r?1:min(d1[l+r-i],r-i)));
		while(i-k>=0 && i+k<n && s[i-k]==s[i+k])
			k++;
		d1[i]=k--;
		if(i+k>r)
		{
			l=i-k;
			r=i+k;
		}
	}
}
int hash[30007];
int main()
{
	int k;
	scanint(k);
	fastRead_string(s);
	n=strlen(s);
	int ans=0;
	rep(i,n)
		hash[i]=0;
	if(k&1)
	{
		makeodd();
		k=(k-1)/2+1;
		rep(i,n)	
		{
			if(d1[i]>=k){	
			hash[i+1-k]=1;
			}
		}
	}
	else
	{
		makeven();
		rep(i,n)
		{
			if(d2[i]*2>=k){
			hash[i-k/2]=1;
			}
		}
	}
	rep(i,n)
	{
		if(hash[i]){
		
		ans++;
		}
	}

	cout<<ans<<endl;
}

			
	

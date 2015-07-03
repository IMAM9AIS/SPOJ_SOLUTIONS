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
string words[2500];
int hashkey(string s)
{
	int l=s.length();
	int val=0;
	rep(i,l)
	{
		char ch=s[i];
		val=val+s[i]*(i+1);
	}
	val=val*19;
	val=val%101;int j=1;int nval;
//	cout<<val<<endl;
	if(words[val]!="~")
	{
		while( j<=19)
		{
			
			 nval=val+j*j+23*j;
			nval=nval%101;
			if(words[nval]=="~"|| words[val]==s)
				break;
			j++;
		}
	}
	if(words[val]!="~")
	{
		if(words[nval]!="~")
			return -1;
		else
			return nval;
	}
	else
		return val;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		rep(i,2500)
		{
			words[i]="~";
		}
		int n;
		cin>>n;getchar();
		while(n--)
		{
			string s;		
			getline(cin,s);
			int i=0;
			while(s[i]!=':')
				i++;
			i++;string wd="";
			while(i<s.length())
			{
				wd=wd+s[i];
				i++;
			}
			if(s[0]=='A')
			{
				int val=hashkey(wd);
				if(val!=-1)
				{	int f=0;
					rep(i,102){
						if(words[i]==wd){
						f=1;break;}
					}
					if(!f)
					words[val]=wd;
				}
			
			}		
			else
			{
				rep(i,200)
				{
					if(words[i]==wd)
					{
						words[i]="~";
						break;
					}
				}
			}

				
			
		}
		int ct=0;
		rep(i,200)
		{
			if(words[i]!="~")
				ct++;
		}
		printf("%d\n",ct);
		rep(i,200)
		{
			if(words[i]!="~")
			{
				printf("%d:",i);
				cout<<words[i]<<endl;
			}
		}
	//	cout<<ct<<endl;

	}
}


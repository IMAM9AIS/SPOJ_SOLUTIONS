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
        int n;
        s(n);
        VI v;
        rep(i,n)
        {   
                int a;
                s(a);
                v.pb(a);

        }
        SORT(v);
        int t=10;int i=0;
        int ar[500];
        mem(ar,0);
        while(t<=720 && i<n)
        {
                t=t+v[i];
                ar[i++]=t;
        }   
        int done=0;int pen=0;
        rep(i,n)
        {
                if((ar[i])<=360 && ar[i]!=0)
                {
                        done++;
                }
                else
                {
                        if(ar[i]>360 && ar[i]<=720)
                        {
                                done++;
                                pen=pen+(ar[i]-360);
                        }
                }
        }
        cout<<done<<" "<<pen<<endl;


}
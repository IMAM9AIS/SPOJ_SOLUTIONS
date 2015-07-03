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
#define int1 ll
typedef long long ll;
using namespace std;
int1 ar[600000];
int1 sleft[600000];
int1 sright[600000];
int1 ct[600000];
int  main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int1 n;cin>>n;int1 tsum=0;
        rep(i,n)
        {
                int1 a;cin>>a;
                ar[i+1]=a;tsum+=a;
        }
        
        int1 s=ar[n];ct[n]=0;int1 c=0;
        for(int1 i=n-1;i>=1;i--)
        {
                sright[i]=s;
                if(s== tsum/3)
                {
                        c++;
                        //ct[i]=c;
                }
                ct[i]=c;
                s+=ar[i];
        }
 //     for(int i=1;i<=n;i++)
            //  cout<<ct[i]<<" ";
            //cout<<endl;
        int1 pos=1;
        s=0;ll ans=0;
        while(pos<=n-2)
        {

                s=s+ar[pos];
            //  cout<<s<<" ";
                if(s== tsum/3 )
                {
                        //cout<<pos<<endl;
                    //if(ct[pos]==ct[pos+1])
                    ans=ans+ct[pos+1];
                    //else
                    //  ans=ans+ct[pos]-1;
                }
                pos++;
                
        }
        if(tsum%3!=0)
            cout<<"0"<<endl;
        else
            cout<<ans<<endl;

}
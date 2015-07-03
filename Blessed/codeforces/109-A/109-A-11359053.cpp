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
pp dp[1000009];
pp findmin(int sum)
{
    //cout<<sum<<endl;
        if(dp[sum]!=pp(-2,-2))
                return dp[sum];

        if(sum==0)
        {
            dp[sum].first=0;
            dp[sum].second=0;
        
                return dp[sum];
        }
        else
        {
                
             pp a,b;

             if(sum-7>=0)
                    a=findmin(sum-7);
             else
                    a=pp(-1,-1);

             if(sum-4>=0)
                    b=findmin(sum-4);


             else
                    b=pp(-1,-1);

             pp s1,s2;
             if(a.first==-1)
                    s1.first=s1.second=-1;
             else
             {      s1.first=a.first;
                    s1.second=a.second+1;
             }

             if(b.first==-1)
                    s2.first=s2.second=-1;
             else
             {
                    s2.first=b.first+1;
                    s2.second=b.second;
             }
             //if(sum==4)
                //cout<<s2.first<<" "<<s2.second<<"s2"<<endl;

             if(s1.first==-1)
                    dp[sum]=s2;
             else if(s2.first==-1)
                    dp[sum]=s1;
             else
             {
                    int t1=s1.first+s1.second;
                    int t2=s2.first+s1.second;
                    if(t1<t2)
                            dp[sum]= s1;
                    if(t2<t1)   
                            dp[sum]= s2;
                    else
                    {
                        if(s1.first<s2.first)
                                dp[sum]= s1;
                        else
                                dp[sum]= s2;

                    }
             }
             return dp[sum];

        }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif


        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
                dp[i].first=dp[i].second=-2;

        

        for(int sum=0;sum<=n;sum++)
    {
        if(sum==0)
            dp[sum].first=dp[0].second=0;
            
        else
        {
            pp a,b;
            if(sum-7>=0)
                a=dp[sum-7];
            else
                a=pp(-1,-1);

            if(sum-4>=0)
                b=dp[sum-4];
            else
                b=pp(-1,-1);

            pp s1,s2;
            if(a.first==-1)
                s1.first=s1.second=-1;
            else
            {   s1.first=a.first;
                s1.second=a.second+1;
            }
            if(b.first==-1)
                s2.first=s2.second=-1;

            else
            {
                s2.first=b.first+1;
                s2.second=b.second;
            }

            if(s1.first==-1)
                dp[sum]=s2;
            else if(s2.first==-1)
                dp[sum]=s1;
            else
            {
                    int t1=s1.first+s1.second;
                    int t2=s2.first+s1.second;
                    if(t1<t2)
                            dp[sum]= s1;
                    if(t2<t1)   
                            dp[sum]= s2;
                    else
                    {
                        if(s1.first<s2.first)
                                dp[sum]= s1;
                        else
                                dp[sum]= s2;

                    }
            }

        }
    }




        pp ans=dp[n];


    //cout<<ans.first<<" "<<ans.second<<endl;




        //cout<<ans.first<<" "<<ans.second<<endl;
        for(int i=1;i<=ans.first;i++)
                cout<<"4";
        for(int i=1;i<=ans.second;i++)
                cout<<"7";
        if(ans.first==-1 && ans.second==-1)
                cout<<"-1"<<endl;

}
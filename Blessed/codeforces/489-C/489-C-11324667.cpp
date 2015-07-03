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
    //ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int m,s;
        s(m);s(s);

        if(m==1)
        {
            if(s<=9)
            cout<<s<<" "<<s<<endl;
            else
            cout<<"-1 -1"<<endl;

            return 0;
        }


        int ar[105];int ar2[105];
        ar[1]=1;ar2[1]=0;
        int c=s-1;int c1=s;
        for(int i=2;i<=m;i++)
        {
                ar[i]=0;
                ar2[i]=0;
                
        }
        if(c<0)
        {
                //cout<<"h"<<endl;
            cout<<"-1 -1"<<endl;
            return 0;
        }

        int pos=m;
        while(pos>=1 && c!=0)
        {
        //      cout<<pos<<endl;
                if(9-ar[pos]<=c)
                {
                        c=c-(9-ar[pos]);
                        ar[pos]=9;

                }
                else
                {
                        ar[pos]=ar[pos]+c;
                        c=0;
                }


                pos--;
                //cout<<ar[1]<<" "<<ar[2]<<" "<<c<<endl;
        }
        if(c!=0)
        {
                cout<<"-1 -1"<<endl;return(0);
        }

                 pos=m;
                    while(pos>=1 && c1!=0)
                    {
                        if(9-ar2[pos]<=c1)
                        {
                            c1=c1-(9-ar2[pos]);
                            ar2[pos]=9;
                        }
                        else
                        {
                            ar2[pos]=ar2[pos]+c1;
                            c1=0;
                        }

                        pos--;
                    }




        for(int i=1;i<=m;i++)
            printf("%d",ar[i]);
        cout<<" ";
        for(int i=m;i>=1;i--)
            printf("%d",ar2[i]);
        cout<<endl;
}
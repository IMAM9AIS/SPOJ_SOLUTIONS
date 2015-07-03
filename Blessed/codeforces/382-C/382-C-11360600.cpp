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
VI v;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        cin>>n;
        rep(i,n)
        {
                int a;cin>>a;v.pb(a);
        }
        if(n==1)
        {
                cout<<"-1"<<endl;
                return 0;
        }

        SORT(v);

        if(n==2)
        {
            if(v[0]==v[1]-1)
            {
                    cout<<"2"<<endl;
                    cout<<v[0]-1<<" "<<v[1]+1<<endl;
                    return 0;
            }
            int d=v[1]-v[0];
            if(d==0)
            {
                    cout<<"1"<<endl<<v[1]<<endl;
                    return 0;
            }


            if(d%2==0)
            {
                    cout<<"3"<<endl;
                    cout<<v[0]-d<<" "<<v[0]+d/2<<" "<<v[1]+d<<endl;
                    return 0;
            }
            if(d&1)
            {
                    cout<<"2"<<endl<<v[0]-d<<" "<<v[1]+d<<endl;
            }

        }
        if(n>=3)
        {
            int mindif=INT_MAX;;
            rep(i,n-1)
            {
                    int a=v[i+1]-v[i];
                    mindif=min(mindif,a);
            }
            int done=0;int num=-1;
            rep(i,n-1)
            {
                    int a=v[i];
                    if(a+mindif==v[i+1])
                            continue;
                    else
                    {
                            v.pb(a+mindif);
                            num=a+mindif;
                            done=1;
                            break;
                    }
            }
            SORT(v);
            for(int i=1;i<v.size()-1;i++)
            {
                    if((v[i]-v[i-1])!=(v[i+1]-v[i]))
                    {
                            cout<<"0"<<endl;
                            return 0;
                    }
            }
            if(done)
            {
                cout<<"1"<<endl;
                cout<<num<<endl;
            }
            else
            {
                    if(v[0]==v[n-1])
                    {
                            cout<<"1"<<endl<<v[0]<<endl;
                    }
                    else
                    {
                            cout<<"2"<<endl<<v[0]-mindif<<" "<<v[n-1]+mindif<<endl;
                    }
            }
        }
}
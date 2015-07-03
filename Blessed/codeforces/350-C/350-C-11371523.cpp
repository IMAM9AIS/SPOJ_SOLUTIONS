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
VP v;
int compare1(pp a, pp b)
{
        return abs(a.first)<abs(b.first);
}
int compare2(pp a,pp b)
{
        return abs(a.first)+abs(a.second)<abs(b.first)+abs(b.second);
}


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
                int a,b;
                cin>>a>>b;
                v.pb(pp(a,b));
        }
        //  sort(v.begin(),v.end(),compare);
        //sort(v.begin(),v.end(),compare1);
        sort(v.begin(),v.end(),compare2);


        int op=0;
        //rep(i,n)
            //cout<<v[i].first<<" "<<v[i].second<<endl;
        rep(i,n)
        {
                int x=v[i].first;
                int y=v[i].second;
                if(x!=0)
                        op=op+2;
                if(y!=0)
                        op=op+2;

                op=op+2;    
        }
        cout<<op<<endl;
        rep(i,n)
        {
                int x=v[i].first;
                int y=v[i].second;
                if(x!=0)
                {
                    cout<<"1 "<<abs(x)<<" ";
                    if(x>0)
                        cout<<"R"<<endl;
                    else
                        cout<<"L"<<endl;
                }
                if(y!=0)
                {
                        cout<<"1 "<<abs(y)<<" ";
                        if(y>0)
                            cout<<"U"<<endl;
                        else
                            cout<<"D"<<endl;

                }
                cout<<"2"<<endl;
            
            
                    if(y!=0)
                {
                        cout<<"1 "<<abs(y)<<" ";
                        if(y>0)
                            cout<<"D"<<endl;
                        else
                            cout<<"U"<<endl;
                }
                    if(x!=0)
                {
                        cout<<"1 "<<abs(x)<<" ";
                        if(x>0)
                            cout<<"L"<<endl;
                        else
                            cout<<"R"<<endl;
                }
                cout<<"3"<<endl;

        }
}
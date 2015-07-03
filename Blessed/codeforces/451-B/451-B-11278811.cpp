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
VI v1;
VI v2;
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int n;
        s(n);
        rep(i,n)
        {
                int a;s(a);
                v1.pb(a);
                v2.pb(a);
        }
        SORT(v2);
        int b=0;int e=0;int tym=0;
        int pos=0;
        while(pos<n)
        {


            if((v1[pos]!=v2[pos]))
            {
                    if(tym){
                            tym=-1;
                            break;
                        }
                    b=pos;
                    pos++;
                    while(v1[pos]>v1[pos+1] && pos<n-1)
                            pos++;
                    e=pos;
                    tym++;
                    pos++;

            }
            else
            {
                    pos++;
            }

        }
        if(tym==-1)
                cout<<"no"<<endl;
        else
        {
                int pos1=b;int pos2=e;//cout<<b<<" "<<e<<endl;
                //cout<<v1[b]<<" "<<v2[e]<<endl;
                while(b<e && (v1[b]==v2[e]))
                {
                        b++;e--;
                }
                if(b>=e){
                        cout<<"yes"<<endl;
                        cout<<pos1+1<<" "<<pos2+1<<endl;
                    }
                    else
                        cout<<"no"<<endl;
        }


}
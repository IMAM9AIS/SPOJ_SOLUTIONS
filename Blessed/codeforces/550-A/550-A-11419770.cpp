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
VP v1;
VP v2;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        string s;
        cin>>s;
        int pos1=-1;int pos2=-1;
        rep(i,s.size()-1)
        {
                string s1=s.substr(i,2);
                if(s1=="AB" && pos1==-1)
                        pos1=i;
                if(s1=="BA" )
                        pos2=i;
        }
        if(pos1==-1 || pos2==-1)
        {
                cout<<"NO"<<endl;
                return 0;
        }
        if(pos1+1<pos2)
        {
                cout<<"YES"<<endl;
                return 0 ;
        }

        pos1=pos2=-1;
        rep(i,sz(s)-1)
        {
            string s1=s.substr(i,2);
            if(s1=="AB")
                    pos1=i;
            if(s1=="BA" && pos2==-1)
                    pos2=i;

        }

        if(pos2+1<pos1)
        {
                cout<<"YES"<<endl;
                return 0;
        }

        cout<<"NO"<<endl;


    
}
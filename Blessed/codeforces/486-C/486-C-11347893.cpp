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
string reverse(string s)
{
    string s1="";
    int l=s.length()-1;
    while(l>=0)
    {
            char ch=s[l--];
            s1=s1+ch;
    }
    return s1;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif


        int n,p;cin>>n>>p;
        string s;
        cin>>s;
        //int l=s.length();
        p--;
        if(p>=n/2)
        {

                s=  reverse(s);
            //  cout<<s<<endl;
                p= n-1-p;
        }

        int li=-1;int ri=-1;
        int ans=0;
        rep(i,n/2)
        {
            if(s[i]!=s[n-1-i])
            {

                    char c1=s[i];char c2=s[n-i-1];
                    int d1=abs(c1-c2);
                    int d2=abs(min(c1,c2)-'a')+1+abs(max(c1,c2)-'z');
                    ans=ans+min(d1,d2);
                    if(li==-1)
                            li=i;
                    ri=i;
            }
        }
    //  cout<<li<<" "<<ri<<endl;
        if(li==-1 && ri==-1)
        {
                cout<<"0"<<endl;
                return 0;
        }
    //  int ans=0;
        if(ri==-1 || (abs(p-ri)>=abs(p-li)))
        {   
                ans=ans+abs(p-li);
                if(ri!=-1)
                    ans=ans+abs(li-ri);
        }
        if(li==-1 || abs(p-li)>abs(p-ri))
        {
                ans+=abs(p-ri);
                if(li!=-1)
                        ans=ans+abs(li-ri);
        }
        
        cout<<ans<<endl;




}
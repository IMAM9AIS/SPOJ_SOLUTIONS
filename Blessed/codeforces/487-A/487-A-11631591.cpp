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
int hy,ay,dy;
int hm,am,dm;
using namespace std;

int check(int ih,int ia,int id)
{
        int newh=hy+ih;
        int newd=dy+id;
        int newa=ay+ia;
        int speedy=max(0,am-newd);
        int speedm=max(0,newa-dm);

        if(speedy && speedm)
        {
                double ty=(ceil)(((double)newh)/(double)(speedy));
                double tm=(ceil)((double)hm/(double)(speedm));
                                    
                if(ty>tm){
                        return 1;
                    }
        }
        else
        {
                                    
                if(speedy==0 && newh!=0 && speedm!=0){
                    return 1;
                }

        }
        return -1;
}
int binaryid(int s,int e,int ih,int ia)
{
        if(s>e)
        {
                return -1;
        }
        int mid=s+e>>1;
        int ting=check(ih,ia,mid);
        if(ting==-1)
        {
                return binaryid(mid+1,e,ih,ia);
        }
        else{
                int a= (binaryid(s,mid-1,ih,ia));
                if(a==-1)
                        return mid;
                else
                        return a;
        }

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        cin>>hy>>ay>>dy>>hm>>am>>dm;
        int h,a,d;
        cin>>h>>a>>d;
        ll ans=10000000000000;
        for(int ih=0;ih<=1000;ih++)
        {
                for(int ia=0;ia<=1000;ia++)
                {
                        
                        ll got=ih*h+ia*a;
                        int minid=binaryid(0,1000,ih,ia);
                        if(minid!=-1)
                            ans=min(ans,got+minid*d);
                                
                        
                }
        }

        cout<<ans<<endl;

}
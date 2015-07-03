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
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        int z,o;
        cin>>z>>o;
        if(o>z*2+2 || z>o+1)
        {
            printf("-1\n");
        }
        else
        {
                char pre='a';
                while(o&&z)
                {
                        //cout<<"h"<<endl;
                        while(o>z && o>=2 && z>=1)
                        {
                            printf("110");
                            o--;o--;z--;pre='0';
                        }
                        if(z==o+1){
                            z--;
                            printf("0");
                            pre='0';
                        }
                        if(pre!='0' && z!=0)
                        {
                                printf("0");
                                z--;
                                pre='0';
                        }
                        if(pre!='1' && o!=0)
                        {
                                printf("1");
                                o--;
                                pre='1';
                        }
                }
                if(pre!='0' && z==1)
                    printf("0");


                while(o!=0){
                    o--;
                    printf("1");
                }



                
        }
        //cout<<";"<<endl;
   }
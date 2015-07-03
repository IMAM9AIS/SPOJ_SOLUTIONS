using namespace std;

#include<bits/stdc++.h>
typedef long long  ll;




#define rep(x,n) for(__typeof(n) x=0;x<(n);x++)
#define rr(x,n) for(__typeof(n) x=0;x<(n);x++)
#define reps(i,x) for(int  i=0;i<(x.size());i++)
#define rrs(i,x)  for(int i=0;i<x.size();i++)
#define repp(x,n) for(__typeof(n) x=1;x<=(n);x++)
#define FOR(x,m,n) for(__typeof(n) x=(m);x<=(n);x++)
#define foreach(x,n) for(__typeof(n.begin()) x=n.begin();x!=n.end();x++)

///Shortcut
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))
#define len(s) s.size()
#define mp make_pair
#define pb push_back
#define xx first
#define yy second

///Min AND Max
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))

#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))

#define inf (1e15)
#define eps (1e-9)
#define PI acos(-1.0)
#define pi 3.14159265358979323846
#define isEq(a,b) (fabs((a)-(b))<eps)
#define Dist(x1,y1,x2,y2) (sqrt(sqr((x1)-(x2))+sqr((y1)-(y2))))
#define spDist(lat1,long1,lat2,long2,r) ((r)*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos((long1)-(long2))))


/**Define Bitwise operation**/

template<class T> inline T lowbit(T n){return (n^(n-1))&n;}//NOTES:lowbit(
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}
#define check(n, pos) (n & (1<<(pos)))
#define biton(n, pos) (n | (1<<(pos)))
#define bitoff(n, pos) (n & ~(1<<(pos)))

#define ledzero(n) (__builtin_clz(n))
#define trailzero(n) (__builtin_ctz(n))
#define onbit(n) (__builtin_popcount(n))

///upper bound and lower bound
#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

///DEBUG
#define dbg(x) cout<<#x<<": "<<x<<endl
#define dbgar(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl

///Gcd and Lcm
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

///Bigmod && Pow
template<class T>T my_pow(T n,T p){if(p==0)return 1;T x=my_pow(n,p/2);x=(x*x);if(p&1)x=(x*n);return x;} ///n to the power p
template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}
template<class T> inline T Mod(T n,T m) {return (n%m+m)%m;} ///For Positive Negative No.


template<class T>T multiplication(T n,T p,T m){if(p==0)return (T)0;T x=multiplication(n,p/2,m);x=(x+x)%m;if(p&1)x=(x+n)%m;return x;}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}

///string to int
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}/// extract words or numbers from a line
template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}//NOTES:toString(
ll toInt(string s){ll r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toInt(
double toDouble(string s){double r=0;istringstream sin(s);sin>>r;return r;}



const int mod= 1000000007;
typedef   pair<ll,ll>  pii;
typedef   vector<long long>   vi;
typedef   vector<string>   vs;
typedef   map<string,ll>  msi;
typedef   map<ll,ll>  mii;
typedef   map<char,ll>  mci;


ll a,b,n,m,res=0,c=0,t=0,ans=0,cc=0,f=0,ff=0,cnt=0;
string  s,ss;
string ch[100100];
ll ar[5555555],ar1[5555555];

int main()
{


    ll k;
   cin>>s;
   ll l=len(s);
   rep(i,l)
   {
       if(s[i]==s[i+1] && s[i]==s[i+2])
       {
           continue;
       }
       else
        ss+=s[i];
   }

   //cout<<ss<<endl;
   ll l1=len(ss);
   rep(i,l1)
   {

       if(ss[i]==ss[i+1])
       {
           i++;
           c++;

       }
       else c=0;
       if(c==2)
       {
           //ss.erase(i-2,1);
           ss[i]='@';
           c=0;
       }

   }
   rep(i,l1)
   {
       if(ss[i]=='@')continue;
       cout<<ss[i];
   }

    return 0;
}
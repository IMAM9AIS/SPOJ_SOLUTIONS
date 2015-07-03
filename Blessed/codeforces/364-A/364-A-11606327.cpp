# include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const int maxn = 1e5;
ll a;
ll sum[maxn];
ll n[maxn];
vector <ll> v;
string s;

int main(){
    cin >> a >> s;

    for(ll i=1 ; i*i<=a ; i++)
        if(a % i == 0){
            v.push_back(i);
            if(i*i != a)
                v.push_back(a/i);
        }
    sort(v.begin() , v.end());

    sum[0] = (s[0]-'0');
    for(int i=1 ; i<s.size() ; i++)
        sum[i] = sum[i-1] + (s[i]-'0');

    for(int i=0 ; i<s.size() ; i++)
        for(int j=0 ; j<=i ; j++)
            if(j == 0)
                n[sum[i]]++;
            else
                n[sum[i] - sum[j-1]]++;

    ll ans = 0;
    for(int i=0 ; i<v.size() ; i++){
        ll d1 = v[i];
        ll d2 = v[v.size()-1-i];
        if(d1 < maxn && d2 < maxn)
        ans += (n[d1] * n[d2]);
    }
    if(a == 0)
        ans = n[0]*(s.size() *(s.size() + 1)) - n[0]*n[0];

    cout << ans << endl;
    return 0;
}
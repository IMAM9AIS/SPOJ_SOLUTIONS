#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>

using namespace std;

typedef long long LL;

const int maxn = 123333;
const long long mod = 1000000007LL;

int a[maxn];
map<long long, int> b;

long long Pow(long long u, long long v){
    long long w = 1LL;
    for (; v>0; v >>= 1){
        if (v & 1) w = w * u % mod;
        u = u * u % mod;
    }
    return w;
}

int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 1; i<=n; ++i)
        scanf("%d", &a[i]);
    long long sum = 0LL;
    for (int i = 1; i<=n; ++i)
        sum += (LL)a[i];
    for (int i = 1; i<=n; ++i){
        long long c = sum - (LL)(a[i]);
        if (b.find(c) == b.end()) b[c] = 0;
        ++b[c];
    }
    map<long long, int>::iterator it;
    for (it = b.begin(); it != b.end(); ){
        int k = it->second;
        long long c= it->first;
        for (; k > 1 && k % x == 0; k /= x, ++c);
        map<long long, int>::iterator itdel = it;
        ++it;
        b.erase(itdel);
        if (b.find(c) == b.end()) b[c] = 0;
        b[c] += k;
    }
    it = b.begin();
    printf("%d\n", (int)Pow((LL)x, min(sum, it->first)));
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;cin>>n;while(n--){
        string a,b;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        stringstream is1(a),is2(b);
        int a1,b1;
        is1>>a1;is2>>b1;
        int c=a1+b1;
        char ch[100];
        sprintf(ch,"%d",c);
        string s=ch;
        reverse(s.begin(),s.end());
        stringstream is(s);
        int res;is>>res;
        while(res%10==0)
        {
                res=res/10;
        }
        cout<<res<<endl;

}
}

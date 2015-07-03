#include<iostream>
#define _ std::
#define r(i,s,e)for(i=s;i<=e;i++)
main(){int t,n,i,j,M[101][101];_ cin>>t;while(t--){_ cin>>n;r(i,0,n-1)r(j,0,i)_ cin>>M[i][j];for(i=n-2;i>=0;i--){r(j,0,i){M[i][j]+=_ max(M[i+1][j],M[i+1][j+1]);}}_ cout<<M[0][0]<<'\n';}}

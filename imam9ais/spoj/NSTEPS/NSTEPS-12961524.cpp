#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int x,y;
	cin>>x>>y;
	if(x==y){
	if(x%2==0){
	cout<<x+y<<endl;}
	else
		cout<<x+y-1<<endl;
	}
	if(x!=y){
	if(x<2 || (x-y!=2))
		cout<<"No Number"<<endl; 
	if(x-y==2)
	{
		if(x%2==0)
			cout<<x+y<<endl;
		else
			cout<<x+y-1<<endl;
	}
	}
	}
	return 0;
}


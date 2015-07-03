#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n;
	cin>>n;
	if(n==0 || ((n & (n-1))==0))
		printf("TAK\n");
	else
		printf("NIE\n");
}

		

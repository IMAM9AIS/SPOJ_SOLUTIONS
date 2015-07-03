#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Ready"<<endl;
	string s;
	char ch1,ch2;
	getline(cin,s);
	while(1)
	{
		
		stringstream is(s);
		ch1=s[0];ch2=s[1];
		if(ch1==' ' && ch2==' ')
			break;

		if((ch1=='p'&&ch2=='q')||( ch1=='q'&&ch2=='p')||(ch1=='b'&&ch2=='d')||(ch1=='d'&&ch2=='b'))
			cout<<"Mirrored pair"<<endl;
		else
			cout<<"Ordinary pair"<<endl;
		getline(cin,s);
	
	}
}

			

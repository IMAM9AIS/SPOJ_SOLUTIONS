#include<bits/stdc++.h>
using namespace std;
int main()
{
	float d;
	while(1)
	{
		scanf("%f",&d);
		if(d==0.00)
			break;
		int i=1;float a=0.5;
		while(a<d)
		{
			i++;
			a=a+ (float)1.0/(float)((float)i+1.0);
		}
		cout<<i<<" card(s)"<<endl;
	}

		
}	

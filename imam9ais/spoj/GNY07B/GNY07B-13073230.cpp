#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);int k=1;
	while(n--)
	{
		float w;string a;
		scanf("%f",&w);
		cin>>a;	
		if(a=="kg")
		{
			float ans= w*2.2046;
			cout<<k++<<" ";
			printf("%.4f",ans);
			printf(" lb\n");
		}
		if(a=="l")
		{
			float ans=w*0.2642;
			cout<<k++<<" ";
			printf("%.4f",ans);
			printf(" g\n");
		}
		if(a=="lb")
		{
			float ans=w*0.4536;
                        cout<<k++<<" ";
                        printf("%.4f",ans);
                        printf(" kg\n");
		}
		if(a=="g")
		{
			float ans=w*3.7854;
                        cout<<k++<<" ";
                        printf("%.4f",ans);
                        printf(" l\n");
		}
	}
	return 0;
}



	


			

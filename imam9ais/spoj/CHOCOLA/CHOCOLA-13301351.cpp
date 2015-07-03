#include<bits/stdc++.h>
using namespace std;
int incol[1001];
int inrow[1001];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		priority_queue<int> pq;
		int col,row;
		scanf("%d %d",&col,&row);
		for(int i=1;i<=col-1;i++)
		{
			int a;scanf("%d",&a);
			pq.push(a);
			incol[a]++;
		}
		for(int j=1;j<=row-1;j++)
		{
			int a;scanf("%d",&a);
			pq.push(a);
			inrow[a]++;
		}
		int re=0;int nh=1;int nv=1;
		while(!pq.empty())
		{
			int k=pq.top();
		//	cout<<"taking"<<" "<<k<<endl;
			pq.pop();
			if(incol[k])
			{
				incol[k]--;
				re=re+ k*nh;
				nv++;
			}
			else if(inrow[k])
			{
				inrow[k]--;
				re=re+k*nv;
				nh++;
			}
			//cout<<"re"<<re<<endl;
		}
		printf("%d\n",re);
	}
	return 0;
}
	

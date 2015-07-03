//////this code justifies the use of ordered set data structures using stl////
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace  __gnu_pbds;
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
int main()
{
	ordered_set X;
	int q;
	scanf("%d",&q);
	while(q--)
	{
		char ch;int x;
		scanf(" %c%d",&ch,&x);
		if(ch=='I')
			X.insert(x);
		if(ch=='D')
			X.erase(x);
		if(ch=='K')		
		{
			if(X.find_by_order(x-1)!=X.end())
			{
				int	ans=*X.find_by_order(x-1);
				printf("%d\n",ans);
			
			}
			else
			{
				printf("invalid\n");	
			}
		}
		if(ch=='C')
		{
			int ans=X.order_of_key(x);
			printf("%d\n",ans);
		}
	}
}

			
		

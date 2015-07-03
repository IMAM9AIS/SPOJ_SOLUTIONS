#include<bits/stdc++.h>
using namespace std;
int hashpos[2][100005];
int hashneg[2][100005];
int ar1[100005];
int ar2[100005];
int arr1[200005];
int arr2[200005];
int main()
{
	while(1)
	{
		memset(hashpos,-1,sizeof hashpos);
		memset(hashneg,-1,sizeof hashneg);
		int n1,n2;
		scanf("%d",&n1);if(n1==0)break;
	for(int i=0;i<n1;i++)
	{
		int a;scanf("%d",&ar1[i]);
		if(ar1[i]>=0)
			hashpos[0][ar1[i]]=1;
		else
			hashneg[0][abs(ar1[i])]=1;
	}
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
	{
		int a;scanf("%d",&ar2[i]);
		if(ar2[i]>=0)
			hashpos[1][ar2[i]]=1;
		else
			hashneg[1][abs(ar2[i])]=1;
	}
	int s1=0;
	int s2=0;
	int k=0;
	for(int i=0;i<n1;i++)
	{
		if(ar1[i]>=0)
		{
			if(hashpos[0][ar1[i]]!=-1 && hashpos[1][ar1[i]]!=-1)
			{
				arr1[k++]=s1;
				arr1[k++]=ar1[i];
				s1=0;
			}
			else
			{
				s1=s1+ar1[i];
			}
		}
		else
		{
				  if(hashneg[0][abs(ar1[i])]!=-1 && hashneg[1][abs(ar1[i])]!=-1)
                        {
                                arr1[k++]=s1;
                                arr1[k++]=ar1[i];
                                s1=0;
                        }
                        else
                        {
                                s1=s1+ar1[i];
                        }
		}
	}
	arr1[k++]=s1;
	int size1=k;
	k=0;
	
	for(int i=0;i<n2;i++)
	{
		if(ar2[i]>=0)
		{
			if(hashpos[0][ar2[i]]!=-1 && hashpos[1][ar2[i]]!=-1)
			{
				arr2[k++]=s2;
				arr2[k++]=ar2[i];
				s2=0;
			}
			else
			{
				s2=s2+ar2[i];
			}
		}
		else
		{
				if(hashneg[0][abs(ar2[i])]!=-1 && hashneg[1][abs(ar2[i])]!=-1)
                        {
                                arr2[k++]=s2;
                                arr2[k++]=ar2[i];
                                s2=0;
                        }
                        else
                        {
                                s2=s2+ar2[i];
                        }
		}
	}
	arr2[k++]=s2;
	int size2=k;
	/**for(int i=0;i<size1;i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	for(int i=0;i<size2;i++)
		cout<<arr2[i]<<" ";
	cout<<endl;*/
	
	long long sum=0;
	for(int i=0;i<size1;i++)
		sum=sum+max(arr1[i],arr2[i]);
	cout<<sum<<endl;	
	}


				
}

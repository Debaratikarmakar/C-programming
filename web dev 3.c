#include<stdio.h>
int main()
{
	int n,arr[n],i,j;
	printf("Enter the no of element: ");
	scanf("%d",&n);
	printf("Enter the elements one by one: ");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//	printf("\nx = %d");
//	scanf("%d",&i);
	for(i=0;i<n;i++)
	{
		int count=0;
		if(arr[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[j]==arr[i])
				{
					arr[j]=-1;
					count++;
				}
			}
			printf("%d --> %d",arr[i],count);
		}
	}
	return 0;
}

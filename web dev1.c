#include <stdio.h>
int main()
{
	int a[50],i,x,n;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter the elements in to the array:\n");
	
	for(i=0;i<n;i++)
	
		scanf("%d",&a[i]);
	
		
	printf("The elements are the given array are: \n");
	for(i=0;i<n;i++)
	
		printf("%d\n",a[i]);
	
	
	x=a[0];
	a[0]=a[n-1];
	a[n-1]=x;
	printf("\nThe elements in the array after swaping : \n");
	
	for(i=0;i<n;i++)
	
		printf("%d\n",a[i]);
	
	
	return 0;
	
}

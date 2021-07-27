#include<stdio.h>

int main()
{
    int arr[100], size, i, mul=1;
    float  avg=0;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
          mul = mul * arr[i]; 
         
    printf("Product of the array = %d\n",mul);
    
    return 0;
}

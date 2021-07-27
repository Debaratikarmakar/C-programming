#include <stdio.h>
    void swap34(float *ptr1, float *ptr2);
    void main()
    {
 
        
        int i, n,p1,p2,x[10];
 
        printf("Enter the length of array: ");
        scanf("%d", &n);
 
        printf("Enter Elements one by one\n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", x + i);
        }
 
        printf("pos 1 = ");
        scanf("%d",&p1);
        printf("pos 2 = ");
        scanf("%d",&p2);
 
        swap34(x + 2, x + 3);
        printf("\nResultant Array...\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("X[%d] = %d\n", i, x[i]);
        }
 
    }
 
   
    void swap34(float *ptr1, float *ptr2 ) 
    {
 
        float temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
 
    }

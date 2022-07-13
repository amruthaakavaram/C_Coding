
#include<stdio.h>
int main()
{
	int *p,i;
	// Pointer to an array of 5 integers
	int (*ptr)[5];
	int arr[5];
	// Points to 0th element of the arr.
	p = arr;
	// Points to the whole array arr.
	ptr = &arr;
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
	printf("%d\n",p);
    printf("%d\n",ptr);
    p++;
    ptr++;
    printf("%d\n",p);
    printf("%d\n",ptr);
	
	return 0;
}

// This code is contributed by SHUBHAMSINGH10

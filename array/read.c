#include <stdio.h>
int main()
{
	int a[6], i=0;
	printf("\nEnter the elements of the array=\n");
	for (i=0;i<=5 ;i++ )
		{
	    scanf("%d\n", &a[i]);     /* taking input array from the user */
	    }
	printf("The elements of the array you have entered are as follows :\n");
	for(i=0; i<=5; i++)
	    {
	    printf("\n%d", a[i]);        /* printing the array elements or traversing the array */
		}
}
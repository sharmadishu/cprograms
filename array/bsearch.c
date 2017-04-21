#include <stdio.h>
 
int main()
{
   int array[50], i, beg, end, middle, n, search ;
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);
   
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);
   printf("Enter value to search\n");
   scanf("%d", &search);
   beg = 0;
   end = n - 1;
   middle = (beg+end)/2;

   while (beg <= end) 
   {
      if (array[middle] < search)
         beg = middle + 1;    
      else if (array[middle] == search) 
      {
         printf("%d found at location %d.\n", search, middle+1);
         break;
   }
       else
          end = middle - 1;

         middle = (beg + end)/2;
      }
   if (beg > end)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;   
   }
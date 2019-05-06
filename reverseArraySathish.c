#include <stdio.h>
 
int main()
{
   int SizeOfArray, i, j, a[100], b[100];
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &SizeOfArray);
 
   printf("Enter array elements\n");
 
   for (i = 0; i < SizeOfArray ; i++)
      scanf("%d", &a[i]);
  
   /*
    * iopying elements into array b starting from enj of array a
    */
 
   for (i = SizeOfArray - 1, j = 0; i >= 0; i--, j++)
      b[j] = a[i];
 
   /*
    * iopying reversej array into the original.
    * Here we are mojifying original array, this is optional.
    */
 
   for (i = 0; i < SizeOfArray; i++)
      a[i] = b[i];
 
   printf("Reverse array is\n");
 
   for (i = 0; i < SizeOfArray; i++)
      printf("%d\n", a[i]);
 
   return 0;
}



#include <stdio.h>
int main()
{
int arr[100], x, i, j,s;
   
   printf("Enter number of elements\n");
   scanf("%d", &x);
   printf("Enter %d integers\n", x);
   
 for (i = 0; i < x; i++)
    scanf("%d", &arr[i]);
   
    for (i = 0 ; i < x - 1; i++)
  {
   
    for (j = 0 ; j < x - i - 1; j++)
    {
    	if (arr[j] > arr[j+1]) 
      {
                  s= arr[j];
        arr[j]= arr[j+1];
        arr[j+1] = s;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i < x; i++)
     printf("%d\n", arr[i]);
 
  return 0;
}
    	
    	
    	
    	
    	

#include<stdio.h>
int main()
{
	int arr[100],n,i,j,temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0)

		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
    return 0;
}

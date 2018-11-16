#include<stdio.h>

int divide(int p,int r ){
	int q;
     if(p > r)
        
    q = (p+r)/2;
    printf("%d ",q);
}
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
	divide(6,2 );
}

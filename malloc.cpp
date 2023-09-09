#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("Memory Not allocated..");
		exit(0);
	}
	else
	{
		printf("Etner the elements of the array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	}
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("%d  ",&a[i]);
		}
}

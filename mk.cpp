#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10],n, i;
	printf("enter the size of array");
	scanf("%d",&n);
	int * mk=(int*)malloc(n*sizeof(int));
	printf("enter the element of array");
	mk = &a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	int a = 71;
for(i=0;i<n;i++){

	printf("%u    ",mk);
}
printf("\n--------------------------\n");
for(i=0;i<n;i++){

	printf("%d    ",*mk[i]);
}
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10],n,i,iteam;
	int temp=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search");
	scanf("%d",&iteam);
	for(i=0;i<n;i++)
	{
	if(a[i]==iteam)
	{
		temp++;
		break;
	}
	}
	if(temp>0)
	{
		printf("Found %d",i);
	}
	else
	{
		printf("Not Found");
	}
	
	return 0;
}

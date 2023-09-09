#include<stdio.h>
void selection(int *a[],int n);
int main()
{
	int a[5]={3,2,6,5,1};
	int min,i,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]<a[j])
			{
				min=j;
			}
			
		}
	}
}

#include<stdio.h>
int main()
{
	int a,*ptr;
	ptr=&a;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("%d",ptr);
	printf("\n");
	printf("%d\n",*ptr);
	printf("%d",&a);
	return 0;
//int  x=1,z[2]={10,11};
//int *p=NULL;
//p=&x;
//*p=10;
//p=&z[1];
//*(&z[0]+1)+=3;
//printf("%d\t%d\t%d\t",x,z[0],z[1]);
//return 0;
}

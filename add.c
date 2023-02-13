#include <stdio.h>
int add(int a, int b)
{
	return(a+b);
}
int main(void)
{
	int a=0,b=0,i;
	printf("Enter Two Veriable:");
	scanf("%d %d",&a,&b);
	i=add(a,b);
	printf("Addition of Two Veriable:%d",i);
	printf("New Comment Added");
	return 0;
}


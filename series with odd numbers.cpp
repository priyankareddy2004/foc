#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d",i);
	}
	return 0;
}
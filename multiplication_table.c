#include<stdio.h>
int main()
{
	int n,i;
	printf("Multiplication Table of: \n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		printf("n * i = %d",n*i);
	}
	return 0;
}


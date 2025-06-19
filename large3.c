#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter any three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c)
		max=a;
	else if(b>a && b>c)
		max=b;
	else 
		max=c;
	printf("The Largest Element amoung the given numbers is %d\n ",max);
	return 0;
}


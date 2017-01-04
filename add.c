#include<stdio.h>

int add(int x,int y)
{
	int z;
	z = 2*x+3*y;
	return z;	

}

void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	
	c=add(a,b);
	printf("Sum of the two no.s is %d",c);

}

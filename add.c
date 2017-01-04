#include<stdio.h>

int add(int x,int y,int u)
{
	int z;
	z=x+y+u;
	return z;	

}

void main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b,&c);
	
	c=add(a,b,c);
	printf("Sum of the two no.s is %d",c);

}

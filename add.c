#include<stdio.h>
#include<conio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;	

}
int mul(int x1,int y1)
{
return x1*y1;
}
void main()
{
	int a,b,c,result;
	scanf("%d%d",&a,&b);
	
	c=add(a,b);
	printf("Sum of the two no.s is %d",c);
	result=mul(a,b);
	printf("mul of the two no.s is %d",result);

}

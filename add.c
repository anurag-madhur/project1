#include<stdio.h>

int swap(int x,int y)
{
	
	x=x+y;
        y=x-y;
        x=x-y;	

}

void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	swap(a,b);
	return 0;

}

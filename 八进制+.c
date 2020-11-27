#include <stdio.h>
#include <math.h>

/*Ê®½øÖÆ*/
int main(void)
{
	int x,a,b,n;
	scanf("%d",&x);
	printf("x=%d\n",x);


	n=0;
	b=0;
	do
	{
	a=x%8;
	b=b+a*pow(10,n);
	n=n+1; 
	x=x/8;
	}
	while(x!=0);
	printf("x=%d\n",b);

}

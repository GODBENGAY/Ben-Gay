#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d",&a);
	b=1000;
	c=a/b;
	d=a-c*1000;
	e=d/100;
	f=d-e*100;
	g=f/10;
	h=f-g*10;
	printf("%d\n",c);
	printf("%d\n",e);
	printf("%d\n",g);
	printf("%d\n",h);
}

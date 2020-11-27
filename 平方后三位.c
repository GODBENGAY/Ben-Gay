#include <stdio.h>
#include <math.h>
int main()
{
	int e,a,n,f;
	int b,c=1,d;
	scanf("%ld%ld",&a,&n);
	for (b=1;b<=n;b++)
	{
		c=a*c;
		d=c/100%10; /*百位 */
		f=c/10%10;  /*十位*/
		e=c%10;     /*个位*/
		c=100*d+f*10+e;
	}
	if (pow(a,n)<=100)
	{
		printf("The last 3 numbers is %d.\n",c);
	}
	else
	{
		printf("The last 3 numbers is %d%d%d.\n",d,f,e);
	}
}

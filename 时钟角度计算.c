#include <stdio.h>
#include <math.h>

main()
{
	int a,b,g;
	float e,f,c,d;
	scanf("%d%d",&a,&b);
	c=30*a-5.5*b;
	f=fabs(c);
	if (f<=180) 
	{
		if (b<10)
		{
			printf("At %d:0%d the angle is %3.1f degrees.\n",a,b,f);
		}
		else
		{
			printf("At %d:%d the angle is %3.1f degrees.\n",a,b,f);
		} 

	}
	else
	{
	f=360-f;
		if (b<10)
		{
			printf("At %d:0%d the angle is %3.1f degrees.\n",a,b,f);
		}
		else
		{
			printf("At %d:%d the angle is %3.1f degrees.\n",a,b,f);
		} 
	}


}

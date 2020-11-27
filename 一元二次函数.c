 #include <stdio.h>
#include <math.h>

main()
{
	int a,b,c,g;
	double d,e,f,h,i,j,k;
	scanf("%d%d%d",&a,&b,&c);
	if (a==0)
	{if (b!=0)
		{d=-1*(float)c/(float)b;
		if (d*3==d)
		{
			printf("x=0.000000\n");
		 } 
		 else
		 {
		 		printf("x=%lf\n",d);
		 }
		 
		}
	 else
	 {
	 	printf("Input error!\n");
	 }
	}
	else
	{
		g=(float)b*(float)b-4*(float)a*(float)c;
		if (g<0)
		{
			g=-1*g;
			h=sqrt(g);
			i=-1*(float)b/(2*(float)a);
			e=h/(2*(float)a);
			if (i==0)
			{
				printf("x1=%lfi\n",e);
				printf("x2=-%lfi\n",e);
			 } 
			 else
			 {
			printf("x1=%lf+%lfi\n",i,e);
			printf("x2=%lf-%lfi\n",i,e);
			 }
		}
		else
		{
			h=sqrt(g);
			i=-1*(float)b/(2*(float)a);
			e=h/(2*(float)a);
			j=e+i; 
			k=i-e; 
			if (j!=k)
			{
			printf("x1=%lf\n",j);
			printf("x2=%lf\n",k);
			}
			else 
			{
				if (k*3==k)
				{
					printf("x1=x2=0.000000\n");
				}
				else
				{		printf("x1=x2=%lf\n",k);
				}
		
			}
			
		}
	 } 
}

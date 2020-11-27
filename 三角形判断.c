#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		if (a==b&&b==c)
		{printf("equilateral triangle.\n");
		}
		else
		{
			if (a==b||b==c||a==c)
			{printf("isoceles triangle.\n");
			}
			else
			{printf("triangle.\n");
			}
		}
	}
	else 
	{printf("non-triangle.\n");
	}
} 

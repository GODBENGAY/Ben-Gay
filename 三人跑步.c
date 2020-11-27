#include <stdio.h>
int main()
{
	int N,a,b,c,count=0;
	scanf("%d",&N);
	for (c=N;c>0;c--)
	{
		for (b=c;b>0;b--)
		{
			for (a=b;a>0;a--)
			{
				if (c*c==a*a+b*b) count++;
				else continue;
			}
		}
	}
	printf("%d",count);
}
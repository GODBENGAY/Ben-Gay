#include <stdio.h>
int main()
{
	int i,a=1,j=1;
	scanf("%d",&i);
	for(;j<=i;j++)
	{
		for(;a<=i*j;a++)
		{
			printf("%3d",a);
		}
		printf("\n");
	}
}

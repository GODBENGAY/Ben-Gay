#include <stdio.h>
int main()
{
	int n,num1,num2,num3,i;
	scanf("%d",&n);
	for (num1=1;num1<=(n*2-1);num1++) printf("*");
	printf("\n");
	for (i=2;i<=n;i++)
	{
		for (num2=1;num2<=(i-1);num2++) printf(" ");
		if (i==n)
		{
			printf("*\n");
			break;
	}
		else
		{ 
		printf("*");
		for (num3=1;num3<=(2*n-1-(2*i));num3++) printf(" ");
		printf("*\n");
	}
	 } 
}

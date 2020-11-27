#include <stdio.h>
int main()
{
	int a=2,n;
	scanf("%d",&n);
	loop:if (n%a!=0)
	{
		a++;
		if (a<n)
		{
			goto loop;
		}
		else
		{
			printf("The max prime number is %d.\n",n);
		}
	}
	else
	{
		n--;
		a=2; 
		goto loop;
	}
}

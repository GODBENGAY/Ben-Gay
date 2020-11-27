#include <stdio.h>
int main()
{
	int m=0,n,answer=0;
	scanf("%d",&n);
	for (;answer<n;)
	{
		m++;
		answer+=m;
	}
	printf("%d",m);
}
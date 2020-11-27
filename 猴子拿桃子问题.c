#include <stdio.h>
int main()
{
	int a=1,n;
	scanf("%d",&n);
	n=n-1;
	if (n==0)
	{
		printf("The monkey got 1 peach in first day.\n");
	 } 
	 else
	 {
	do
	{
		a=2*(a+n);
		n--;
	}
	while(n>0);
	printf("The monkey got %d peaches in first day.\n",a);
}
 } 

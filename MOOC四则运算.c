#include <stdio.h>
int main()
{
	int a,b,plus,minus,cheng,chu,yu;
	scanf("%d%d",&a,&b);
	plus=a+b;
	minus=a-b;
	cheng=a*b;
	chu=a/b;
	yu=a%b;
	printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d\n",a,b,plus,a,b,minus,a,b,cheng,a,b,chu);
	printf("%d%%%d=%d",a,b,yu);
}
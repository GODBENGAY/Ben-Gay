#include <stdio.h>
int main()
{
	int b,a,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c&&a==c) printf("equilateral triangle.");
	else if ((a+b<=c)||(a+c<=b)||(c+b<=a)) printf("non-triangle.");
	else if ((a==b&&a!=c)||(a==c&&b!=c)||(b==c&&a!=b)) printf("isoceles triangle.");
	else printf("triangle.");
}
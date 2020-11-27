#include <stdio.h>
#include <math.h>
int main(void)
{
	float num,n,wei,a;
	int b;
	scanf("%f%f",&n,&wei);
	a=pow(10,(n-wei));
	b=(int)a;
	printf("%f",b);
 } 

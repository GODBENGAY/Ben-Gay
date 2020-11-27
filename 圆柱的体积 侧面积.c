¡¤#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	double r,h,s,v;
	scanf("%lf",&r);
	scanf("%lf",&h);
	s=2*PI*r*h;
	v=PI*h*r*r;
	printf("s=%4.2lf,v=%4.2lf\n",s,v);
 } 

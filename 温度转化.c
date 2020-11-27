#include <stdio.h>
#include <math.h>

int main() 
{
	float a,b,c;
	scanf("%f%f",&a,&b);
	if (a==1)
	    {
		c=(b-32)*5/9;
        printf("The Centigrade is %4.2f\n",c);        
	}
	else {
	c=(b*9/5)+32;
	    
		printf("The Fahrenheit is %4.2f\n",c);
	}
}


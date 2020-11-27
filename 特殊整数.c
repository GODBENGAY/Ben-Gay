#include <stdio.h>
#include <math.h>
int main()
{
	int count=0,num2,num=1,n,wei,a,b,c,num3=1,num4=1,i=2,x,sw=0;
	scanf("%d",&n);
	if (n==8)
	{
		printf("0\n");
		return 0;
	}
	for (a=1;a<n;a++)
	{
		num=num*10;
	}
    for (b=0;b<n;b++)
    {
    	num3=num3*10;
	}
	for (;num<num3;num++)
	{
	for (wei=1;wei<=n;wei++)
	{
		sw=0;
		num4=1;
		for (c=1;c<=(n-wei);c++)
		{
			num4=num4*10;
		}
		num2=(num/num4)%(wei*wei);
		if (num2!=0)
		{
			sw=1; break;
		}
	}
	if (sw==0) count++;
    }
	printf("%d\n",count);
 } 

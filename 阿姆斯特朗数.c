#include <stdio.h>
#include <math.h>
int main()
{
	int n,num,a,b,c,e,f,d;
	scanf("%d",&n);
	switch (n)
	{
		case(1):printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n"); break;
		case(2):printf("No output.\n"); break;
		case(3):num=100;
		for (;num<=999;num++)
		{
			c=num/100%10; /*��λ */
			b=num/10%10;  /*ʮλ*/
			a=num%10;     /*��λ*/
			if (num==pow(a,3)+pow(b,3)+pow(c,3))
			{
				printf("%d\n",num);
			 } 
		}
		break;
		case(4):num=1000;
		for (;num<=9999;num++)
		{
			d=num/1000%10; /*ǧλ*/ 
			c=num/100%10; /*��λ */
			b=num/10%10;  /*ʮλ*/
			a=num%10;     /*��λ*/
			if (num==pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4))
			{
				printf("%d\n",num);
			 } 
		}
		break;
		case(5):num=10000;
		for (;num<=99999;num++)
		{
			e=num/10000%10; /*��λ*/ 
			d=num/1000%10; /*ǧλ*/ 
			c=num/100%10; /*��λ */
			b=num/10%10;  /*ʮλ*/
			a=num%10;     /*��λ*/
			if (num==pow(a,5)+pow(b,5)+pow(c,5)+pow(d,5)+pow(e,5))
			{
				printf("%d\n",num);
			 } 
		}
		break;
		case(6):num=100000;
		for (;num<=999999;num++)
		{
			f=num/100000%10; /*ʮ��λ*/ 
			e=num/10000%10; /*��λ*/ 
			d=num/1000%10; /*ǧλ*/ 
			c=num/100%10; /*��λ */
			b=num/10%10;  /*ʮλ*/
			a=num%10;     /*��λ*/
			if (num==pow(a,6)+pow(b,6)+pow(c,6)+pow(d,6)+pow(e,6)+pow(f,6))
			{
				printf("%d\n",num);
			 } 
		}
		break;
	}
 } 

#include <stdio.h>
int main()
{
	int n,num1,num2,num3;
	char c,b,d;
	scanf("%d %c",&n,&c);
	if (n==52)
	{
		printf("%c\n",c);
	}
	else
	{
	b=(int)c+n;
	d=(int)c;
	if (d>=97&&d<=122&&b>122)
	{
		num1=b-123;
		num3=num1%52;
		num2=97+num3;
		printf("%c\n",num2);
	}
	else if (b<=122&&b>=97&&d>=97)
	{
		printf("%c\n",b);
	}
	else if (d<=90&&d>=65&&b>90)
	{
		num1=b-91;
		num3=num1%52;
		num2=num3+65;
		printf("%c\n",num2);
	}
	else if (d<=90&&d>=65&&b<=90&&b>=65)
	{
		printf("%c\n",b);
	}
	else if(d<65||d>90&&d<97||d>122)
	{
		printf("Data Error!\n");
	}
	else if (b<65&&d>=65&&d<=90)
	{
		num1=-n-(d-65);
		num3=num1%52;
		num2=90-num3+1;
		printf("%c\n",num2);
	}
	else if (b<97&&d>=97&&d<=122)
	{
		num1=-n-(d-97);
		num3=num1%52;
		num2=122+1-num3;
		printf("%c\n",num2);
	}
}
}

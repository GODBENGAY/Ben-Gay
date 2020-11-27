#include <stdio.h>
int main()
{
	int year,day,num1,num2,week;
	scanf("%d",&year);
	num1=year-1900;
	if (num1%4!=0)
	{
		num2=num1*365+num1/4+day+31+28+31+30+1;
		week=num2%7;
		switch(week)
		{
			case(0):day=8;
			printf("%d\n",day); break;
			case(1):day=14;
			printf("%d\n",day); break;
			case(2):day=13;
			printf("%d\n",day); break;
			case(3):day=12;
			printf("%d\n",day); break;
			case(4):day=11;
			printf("%d\n",day); break;
			case(5):day=10;
			printf("%d\n",day); break;
			case(6):day=9;
			printf("%d\n",day); break;
		}
	}
	else
	{
		num2=num1*365+num1/4+day+31+28+31+30+1-1;
		week=num2%7;
		switch(week)
		{
			case(0):day=8;
			printf("%d\n",day-1); break;
			case(1):day=14;
			printf("%d\n",day-1); break;
			case(2):day=13;
			printf("%d\n",day-1); break;
			case(3):day=12;
			printf("%d\n",day-1); break;
			case(4):day=11;
			printf("%d\n",day-1); break;
			case(5):day=10;
			printf("%d\n",day-1); break;
			case(6):day=9;
			printf("%d\n",day-1); break;
		}
	}
}

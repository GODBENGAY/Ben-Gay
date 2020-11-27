#include <stdio.h>
int main()
{
	int year,month,day,num1,num2,week;
	scanf("%d%d%d",&year,&month,&day);
	if (month>12||month<1)
	{
		printf("month is error.\n");
	}
	else
	{
		num1=year-1900;
		if (num1%4!=0)
		{
			switch(month)
			{
				case(1):num2=num1*365+num1/4+day;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(2):num2=num1*365+num1/4+day+31;
				week=num2%7;
				if (day>28||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(3):num2=num1*365+num1/4+day+31+28;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(4):num2=num1*365+num1/4+day+31+28+31;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(5):num2=num1*365+num1/4+day+31+28+31+30;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(6):num2=num1*365+num1/4+day+31+28+31+30+31;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(7):num2=num1*365+num1/4+day+31+28+31+30+31+30;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(8):num2=num1*365+num1/4+day+31+28+31+30+31+30+31;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(9):num2=num1*365+num1/4+day+31+28+31+30+31+30+31+31;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(10):num2=num1*365+num1/4+day+31+28+31+30+31+30+31+31+30;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(11):num2=num1*365+num1/4+day+31+28+31+30+31+30+31+31+30+31;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(12):num2=num1*365+num1/4+day+31+28+31+30+31+30+31+31+30+31+30;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
			}
		}
		else
		{
			switch(month)
			{
				case(1):num2=num1*365+num1/4+day-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(2):num2=num1*365+num1/4+day+31-1;
				week=num2%7;
				if (day>29||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(3):num2=num1*365+num1/4+day+31+29-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(4):num2=num1*365+num1/4+day+31+29+31-1;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(5):num2=num1*365+num1/4+day+31+29+31+30-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(6):num2=num1*365+num1/4+day+31+29+31+30+31-1;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(7):num2=num1*365+num1/4+day+31+29+31+30+31+30-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(8):num2=num1*365+num1/4+day+31+29+31+30+31+30+31-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(9):num2=num1*365+num1/4+day+31+29+31+30+31+30+31+31-1;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(10):num2=num1*365+num1/4+day+31+29+31+30+31+30+31+31+30-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(11):num2=num1*365+num1/4+day+31+29+31+30+31+30+31+31+30+31-1;
				week=num2%7;
				if (day>30||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
				case(12):num2=num1*365+num1/4+day+31+29+31+30+31+30+31+31+30+31+30-1;
				week=num2%7;
				if (day>31||day<0)
				{
					printf("day is error.\n"); break;
				}
				else 
				{
					printf("%d\n",week); break;
				}
			}
		}
	}
}

#include <stdio.h>

int main()
{
	int year, month, day, n, num;
	scanf("%d %d %d %d", &year, &month, &day, &n);
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	num = n + day - days[month - 1]; // *往后推到这个月的最后一天

	//*判断是否在本月之内(把较简单的代码块放在前面，这样可以提高可读性，因为重点在后面)
	if (num <= 0)
	{
		day = day + n;
	}
	else
	{
		//*已经确定至少向后推一个月，从下个月推起
		month++;

		//*如果大于12，重置为1月并进入新的一年
		if (month > 12)
		{
			month = 1;
			year++;
		}

		for (; num >= days[month - 1]; month++) //*这里修改了一点，因为如果不进入下面天数小于一个月的情况的if语句，每次循环都会有month++,所以可以写到for的条件内
		{
			/* 如果大于12，先推到下一年
			第一次进入循环肯定不会有这个问题，
			但是后续不断循环的过程可能存在大于12的情况，
			这里处理掉它 */
			if (month > 12)
			{
				month = 1;
				year++;
				day = num;
			}

			//*区分闰年
			if (year % 4 == 0)
				days[1] = 29;
			else
				days[1] = 28;

			//*天数小于新一个月的天数时
			if (num <= days[month - 1])
			{
				day = num;
				printf("%d.%d.%d\n", year, month, day);
				return 0;
			}

			//*剩下的天数大于一个月，向后推一个月，减掉当月时间(其实这里也可以写进for内，但是可能显得很长)
			num -= days[month - 1];
		}
	}
	printf("%d.%d.%d\n", year, month, day);
}

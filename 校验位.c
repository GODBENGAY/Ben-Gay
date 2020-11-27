#include <stdio.h>
int main()
{
	int jijia,oujia,a,num,check,count;
	int a1[5],a2[5];
	scanf("%d",&a);
	for (count=0;count<5;count++)
	{
		scanf("%1d",&a1[count]);
	}
	for (count=0;count<5;count++)
	{
		scanf("%1d",&a2[count]);
	}
	jijia=a+a1[1]+a1[3]+a2[0]+a2[2]+a2[4];
	oujia=a1[0]+a1[2]+a1[4]+a2[1]+a2[3];
	num=(jijia*3+oujia-1)%10;
	check=9-num;
	printf("%d\n",check);
}
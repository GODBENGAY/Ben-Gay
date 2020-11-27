#include <stdio.h>
int main(void)
{
	// 以每一圈为单位进行循环 
	int n,i=1,num=1,quan,con1=0,con2=-1,count1=0,count2=0; //con1控制矩阵行数 con2控制矩阵列数 num为输出的数字 i是圈数  
	scanf("%d",&n);
	int a[n][n];
	quan=(n+1)/2;
	for (;i<=quan;i++) //控制圈数 
	{
		for (;con2<(n-i);)
		{
			con2++;
			a[con1][con2]=num;
			num++; 
			//每一圈的上面那一条边 
		}
		for (;con1<(n-i);)
		{
			con1++;
			a[con1][con2]=num;
			num++; 
			//一圈的右边那一条边 
		} 
		for (;con2>(i-1);)
		{
		    con2--;
			a[con1][con2]=num;
			num++; 
			//一圈的下面那一条边 
		}
		for (;con1>i;)
		{
			con1--;
			a[con1][con2]=num;
			num++; 
			//一圈的那左边一条边 
		}
    }
    for (;count1<n;count1++)
    {
    	for (;count2<n;count2++)
    	{
    		printf("%3d",a[count1][count2]);
		}
		printf("\n");
		count2=0;
	}
	return 0; 
}

    
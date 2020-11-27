#include <stdio.h>
int main()
{
	 int a,b,i,j,n;
	 scanf("%d",&n);
	 for (j=1;j<=n;j++) //每一行 
	 {
	 	for (b=1;b<=((n-j)*2);b++)  //显示空格 
	 	{
		 printf(" ");
	    }
	    for (i=n;i>=(n-j+1);i--)  //显示前半段递减的数字 
	    {
	    	printf("%-2d",i);
		}
		for (a=(2+i);a<=n;a++)  //显示后半段递增的数字 
		{
			printf("%-2d",a);
		}
	 	printf("\n");
	 }
	 for (;j<=(2*n-1);j++)
	 {
	 	for (b=1;b<=((j-n)*2);b++)  //显示空格 
	 	{
		 printf(" ");
	    }
	    for (i=n;i>=(j-n+1);i--)  //显示前半段递减的数字 
	    {
	    	printf("%-2d",i);
		}
		for (a=(2+i);a<=n;a++)  //显示后半段递增的数字 
		{
			printf("%-2d",a);
		}
	 	printf("\n");
	 }
}

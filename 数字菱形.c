#include <stdio.h>
int main()
{
	 int a,b,i,j,n;
	 scanf("%d",&n);
	 for (j=1;j<=n;j++) //ÿһ�� 
	 {
	 	for (b=1;b<=((n-j)*2);b++)  //��ʾ�ո� 
	 	{
		 printf(" ");
	    }
	    for (i=n;i>=(n-j+1);i--)  //��ʾǰ��εݼ������� 
	    {
	    	printf("%-2d",i);
		}
		for (a=(2+i);a<=n;a++)  //��ʾ���ε��������� 
		{
			printf("%-2d",a);
		}
	 	printf("\n");
	 }
	 for (;j<=(2*n-1);j++)
	 {
	 	for (b=1;b<=((j-n)*2);b++)  //��ʾ�ո� 
	 	{
		 printf(" ");
	    }
	    for (i=n;i>=(j-n+1);i--)  //��ʾǰ��εݼ������� 
	    {
	    	printf("%-2d",i);
		}
		for (a=(2+i);a<=n;a++)  //��ʾ���ε��������� 
		{
			printf("%-2d",a);
		}
	 	printf("\n");
	 }
}

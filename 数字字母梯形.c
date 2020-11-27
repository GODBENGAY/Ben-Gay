#include <stdio.h>
int main()
{
	int num[10]={0,1,2,3,4,5,6,7,8,9};
	int m,n,i=2,j,a,new1,new2,b,pan,c,stop,d,e,stop2,new3,new4,f; //m行数 n首字母 
	scanf("%d%d",&m,&n);
	new1=n;
	new2=n;
	if (m==1) 
	{printf("%d\n",n); return 0;} 
	if (m%2==0) pan=(3*m-2)/2; //中间值 
	else pan=(3*m-1)/2; 
	for (a=1;a<=pan;a++) //循环到中间 
	{
		printf("%d",num[new1]);
		new1++;
		if (new1>9) new1=0;
		printf(" ");
	}
	new1--; //抵消最后一次 
	if (m%2!=0)  new1=new1-1;
	for (;a<=(3*m-3);a++)
	{
		printf("%d",num[new1]);
		new1--;
		if (new1<0) new1=9;
		printf(" ");
	}
	printf("%d\n",num[(new1)]);
	for (;i<m;i++) //中间的 
	{
	   for (j=0;j<((i-1)*2);j++)
	   {
		printf(" "); 
	   }
	   new3=new2+1; 
	   if (new3>9) new3=0;
	   printf("%d",num[new3]);
	   for (b=1;b<=(m*6-4*i-3);b++)
	   {
	   	printf(" ");
	   }
	   printf("%d\n",num[new3]);
	   new2++;
	   if (new2>9) new2=0;
    }
    if (new2>=9) new2=-1;
    for (c=0;c<(m-1);c++) printf("  ");
    if (m%2==0) stop=m/2; //偶数中间停 
    else stop=(m+1)/2; //奇数中间停 
    for (d=0;d<stop;d++)
    {
    	new3=new2+1; 
	    if (new3>9) new3=0;
    	printf("%d",num[new3]);
    	new2++;
    	if (new2>9) new2=0;
    	printf(" ");
	}
	new2--;
	if (m%2==0) stop2=m/2-1;
    else stop2=(m+1)/2-2;
    if (m%2!=0)  new2=new2-1;
	for (e=0;e<stop2;e++)
	{
		new3=new2+1; 
	    if (new3>9) new3=0;
		printf("%d",num[new3]);
		new2--;
		if (new2<0) new2=8;
		printf(" ");
	}
    new3--; 
    for (new4=n,f=1;f<m;f++)
    {
    	new4++;
    	if (new4>9) new4=0;
	}
	printf("%d\n",num[new4]);
}

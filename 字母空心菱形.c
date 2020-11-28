#include <stdio.h>
int main()
{
	int i,n,n1,j=1,m,n2,ji1,ji2;
	char first;
	scanf("%c%d",&first,&n);
	for (i=1,ji1=first-1;i<=n;i++)
	{
		if ((ji1+i)>'Z') ji1='A'-i;
		for (j=1;j<=(n-i);j++)
		{printf(" ");} j=1;
		printf("%c",ji1+i);
		for (m=1;m<=(2*i-3);m++)
		{printf(" ");} m=1;
		if ((i*2-3)>0)
		printf("%c",ji1+i);
		printf("\n");
	}
	n2=n-1;
	for (i=1,ji2=ji1+n-1;i<=n2;i++)
	{
		{for (j=1;j<=i;j++)
		{printf(" ");}}
		if (ji2<'A') ji2='Z';
		printf("%c",ji2);
		for (m=1;m<=(2*n2-2*i-1);m++)
        {printf(" ");}	m=1;
		if ((2*n2-2*i-1)>0)
		printf("%c",ji2);
		printf("\n");
		ji2--;
	}
}
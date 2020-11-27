#include <stdio.h>
#include <string.h>
int main()
{
	char num[1000];
	int n,a,i,j;
	gets(num);
	n=strlen(num);
	for (i=0;i<n;i++)
	{
		for (j=(i+1);j<n;j++)
        {
		if (num[i]>num[j])
		{
			continue;
		}
		else
		{
		a=num[j];
	    num[j]=num[i];
	    num[i]=a;
		} 
		}
	}
	printf("%s\n",num);
}

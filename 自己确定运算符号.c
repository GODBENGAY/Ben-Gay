#include <stdio.h>
#include <math.h>
#include<stdlib.h> 

int main()
{
	int a,b,c=0;
	char d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf(" %c",&d); 
	switch(d)
	{
		case'+':c=a+b; 	printf("%d\n",c); break;
		case'-':c=a-b; 	printf("%d\n",c); break;	 
		case'*':c=a*b; 	printf("%d\n",c); break;	
		case'%':if (b==0)
		 printf("Go to hell!\n");
		 else c=a%b; 	printf("%d\n",c); break;
		case'/': if (b==0) 
		{printf("Go to hell!\n");break;} 
		else c=a/b;	printf("%d\n",c); 
		break;
	}

	return 0;
 }

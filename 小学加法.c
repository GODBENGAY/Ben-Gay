#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	char op;
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
	case'+':c=a+b;
	break;
	case'-':c=a-b;
	break;
	case'*':c=a*b;
	break;
	case'%':c=a%b;
	break;
	case'/':c=a/b;
	break;
}
    printf("%d\n",c);
}

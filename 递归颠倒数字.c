#include <stdio.h> 
#include <stdlib.h>   
int reverse();
int main( )    
{   char str[100];    
    int start, end;    
    gets(str);    
    scanf("%d%d", &start, &end);    
    reverse( str, start, end );    
    printf("%s\n", str);    
    return 0;    
}  
    int reverse(char *str,int start,int end)
  {
  	char c;
  	c=str[start];  str[start]=str[end];  str[end]=c;
  	start++;
  	end--;
  	if (end>start)   reverse( str, start, end );  
  }
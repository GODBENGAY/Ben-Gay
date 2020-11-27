#include<stdio.h>   
int main()   
{ int year,month,day,sumday=0,leap=0;  
    int i,N;  
 int mon[13]={31,28,31,30,31,30,31,31,30,31,30,31,31};  
  scanf("%d %d %d %d",&year,&month,&day,&N) ;  
  sumday=N+day;  
  
    
  for( i=0;i<13;)  
    {  
      if(month==12&&sumday>31)  
        {month=1;i=1;year++;  
        sumday-=31;  
          continue;  
        }  
  
        i=month;  
      if (((year%400==0)||(year%100!=0&&year%4==0))&&month==2)  
      leap=1;  
      else  
      leap=0;  
      if(sumday>mon[i-1]+leap)  
        {sumday-=(mon[i-1]+leap);  
        month++;  
          }  
        else  
        break;   
    }  
    printf("%d.%d.%d\n",year,month,sumday);  
    return 0;  
} 

#include <stdio.h>
#include <math.h>

int main()
{
    int count = 0;
    int min = 1, max = 1;
    int i;

    while (min != 0, max != 0)
    {
        min = 1, max = 1;
        scanf("%d %d", &min, &max);
        if (max==0&&min==0)
		break; 
		else if (min<1000||max>9999)
		{
			printf("Error\n");
		}
		else 
		{
        for (i = min; i <= max; i++)
        {
            if (i % 2 == 0)
            {
                int a1, a2, a3, a4;
                a1 = i % 10;
                a2 = i / 10 % 10;
                a3 = i / 100 % 10;
                a4 = i / 1000 % 10;
                if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4)
                {
                    printf("%d  ", i);
                    count++;
                }
            }
        }
        printf("\ncounter=%d\n", count);
        count=0;
    }
    }
}

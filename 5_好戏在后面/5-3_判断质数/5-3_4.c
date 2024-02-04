#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, count, i;
	count = 0;
    scanf("%d", &a);
    for (i=2;i<=a/2;i++)
    {
		printf("%d ", i);	
        if(a%i==0)
        {
			count++;
            break;		
        }
    }
    if (count==0)
		printf("质数\n");
    else
		printf("合数\n");
	system("pause");
	return 0;
}

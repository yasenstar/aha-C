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
		printf("����\n");
    else
		printf("����\n");
	system("pause");
	return 0;
}

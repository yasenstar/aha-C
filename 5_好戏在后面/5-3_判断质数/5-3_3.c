#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, count, i;
	count = 0;
    // a = 9876543;
    scanf("%d", &a);
    for (i=2;i<=(a-1);i++)
    {
		if(a%i==0)
        {
			count++;
			printf("%d ", i);
        }
    }
    if (count==0)
		printf("����\n");
    else
		printf("����\n");
	system("pause");
	return 0;
}

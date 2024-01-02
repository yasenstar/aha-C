#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, sum;
    sum = 0;
    for (a=1;a<=100;a++)
    {
		sum = sum + a;
    }
    printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

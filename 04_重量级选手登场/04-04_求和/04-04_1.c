#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, sum;
    a = 1;
    sum = 0;
    while (a<=100)
    {
		sum = sum + a;
        a = a + 1;
    }
    printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, sum;
    a = 1;
    sum = 0;
    while (a<=100)
    {
		if ( a % 7 == 0 || a % 10 == 7)
        {
			printf("%d ", a);
			sum = sum + a;
        }		
        a = a + 1;
    }
    printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

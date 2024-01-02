#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a = 1;
    while (a<=100)
    {
		printf("%d ", a);
        a = a + 1;
    }
    a = 99;
    while (a>=1)
    {
		printf("%d ", a);
        a = a - 1;
    }
	system("pause");
	return 0;
}

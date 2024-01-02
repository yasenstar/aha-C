#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, i;
    a = 1;
    i = 1;
    while (i <= 10)
    {
		a = a * i;
        i = i + 1;
    }
    printf("%d\n", a);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a = 1;
    while (a<=15)
    {
		printf("*");
        if (a%5==0) printf("\n");
        a = a + 1;
    }
	system("pause");
	return 0;
}

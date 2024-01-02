#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, total;
    total = 1;
    for (a=1;a<=10;a++)
    {
		total = total * a;
    }
    printf("total is %d\n", total);
	system("pause");
	return 0;
}

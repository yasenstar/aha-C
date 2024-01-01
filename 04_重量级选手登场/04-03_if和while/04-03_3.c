#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a = 1;
    while (a<=100)
    {
		if (a % 7 == 0 || a % 10 == 7)
        {
			printf("%d ", a);
        }
        a = a + 1;
    }
	system("pause");
	return 0;
}

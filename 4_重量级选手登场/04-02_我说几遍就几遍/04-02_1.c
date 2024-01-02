#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a = 1;
    while (a<=10)
    {
		printf("wa%d ", a);
        a = a + 1;        
    }
    printf("终于出来了\n");
	system("pause");
	return 0;
}

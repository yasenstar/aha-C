#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, a;
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {
        if (i % 2 == 1) {continue;}
        printf("%d ", i);
    }
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
    for (i=1;i<=9;i++)
    {
		for (j=1;j<=i;j++)
        {
			printf("%dx%d=%d   ", j, i, i*j);
		}
        printf("\n");
    }
	system("pause");
	return 0;
}

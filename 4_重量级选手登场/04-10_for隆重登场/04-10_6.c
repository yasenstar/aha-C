#include <stdio.h>
#include <stdlib.h>
int main()
{
	int row, a, b;
    for (row=1;row<=5;row++)
    {
		for (a=5-row;a>=1;a--) printf(" ");
        for (b=1;b<=2*row-1;b++) printf("*");
		printf("\n");
    }
    for (row=4;row>=1;row--)
    {
		for (a=1;a<=5-row;a++) printf(" ");
        for (b=1;b<=2*row-1;b++) printf("*");
		printf("\n");
    }
	system("pause");
	return 0;
}

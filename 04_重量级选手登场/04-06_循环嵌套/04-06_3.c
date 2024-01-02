#include <stdio.h>
#include <stdlib.h>
int main()
{
	int row, col;
    row = 1;
    while (row<=5)
    {
		col = 1;
		while (col<=row)
        {
			printf("*");
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
	system("pause");
	return 0;
}

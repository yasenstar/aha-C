#include <stdio.h>
#include <stdlib.h>
int main()
{
	int row, col, total, i;
    scanf("%d", &total);
    row = 1;
    i = 1;
    while (row<=total)
    {
		col = 1;
		while (col<=row)
        {
			printf("%d  ", i);
            col = col + 1;
            i = i + 1;
        }
        printf("\n");
        row = row + 1;
    }
	system("pause");
	return 0;
}

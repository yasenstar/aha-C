#include <stdio.h>
#include <stdlib.h>
int main()
{
	int row, col, total;
    scanf("%d", &total);
    row = 1;
    while (row<=total)
    {
		col = 1;
		while (col<=row)
        {
			printf("%d", row);
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
	system("pause");
	return 0;
}

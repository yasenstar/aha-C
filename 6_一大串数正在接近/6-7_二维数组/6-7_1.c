#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	// srand((unsigned)time(NULL));
    int a[3][4], i, j, x;
    x = 0;
    for (i=0; i<=(3-1); i++) {
		for (j=0; j<=(4-1); j++) {
			a[i][j] = x;
            x++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
	system("pause");
	return 0;
}

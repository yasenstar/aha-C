#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
    for (i=0;i<255;i++) {
		printf("%d %c\n", i, i);
    }
	system("pause");
	return 0;
}

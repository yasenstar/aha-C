#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a;
    srand((unsigned)time(NULL));
    a = rand();
    printf("%d\n", a);
	system("pause");
	return 0;
}

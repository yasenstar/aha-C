#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,x,y,i;
    srand((unsigned)time(NULL));
    for (i=1;i<=10;i++) {
		x = rand()%4000;
        y = rand()%5000;
        a = x * y;
		printf("%d x %d = %d\n",x,y,a);
    }
	system("pause");
	return 0;
}

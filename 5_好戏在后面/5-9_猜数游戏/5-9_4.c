#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a, b;
    
    // generate random integer
    srand((unsigned)time(NULL));
    a = rand()%100;
    
    // read input as b
    scanf("%d", &b);
    
    // compare user input with the random generated number
	if (b>a) {
		printf("it's too big, please continue guess\n");
    }
    if (b<a) {
		printf("it's too small, please continue guess\n");
    }
    if (b==a) {
		printf("congratulation, you get it, it's %d!\n", a);
    }
    

	system("pause");
	return 0;
}

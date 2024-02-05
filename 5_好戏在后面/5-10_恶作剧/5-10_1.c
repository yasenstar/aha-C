#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a, b, sum;
    sum = 6;
    printf("=====Number Guessing Game=====\n");
    printf("Please guess a number between 1 to 99\n");
    printf("You only have 6 chances!\n");
    
    // generate random integer
    srand((unsigned)time(NULL));
    a = rand()%100;
    
    while(1) {
		sum--;
		// read input as b
		scanf("%d", &b);
		
		// compare user input with the random generated number
		if (b>a) {
			printf("it's too big, you have %d chances, please continue guess\n", sum);
		}
		if (b<a) {
			printf("it's too small, you have %d chances, please continue guess\n", sum);
		}
		if (b==a) {
			printf("congratulation, you get it!\n");
            break;
		}
        if (sum==0) {
			printf("Sorry, you have no chance, start over please!\n");
            // if you want it more colorful, you may warn user with shutdown command
            break;
		}
    }
    
	system("pause");
	return 0;
}

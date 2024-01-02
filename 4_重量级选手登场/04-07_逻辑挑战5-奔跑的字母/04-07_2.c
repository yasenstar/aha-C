#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int a, b;
    a = 0;
    while (a<10)
    {
		system("cls");
        b = 0;
        while (b<a)
        {
			printf(" ");
            b = b + 1;
        }
        printf("H");
        Sleep(500);
        a = a + 1;
    }	
    
	system("pause");
	return 0;
}

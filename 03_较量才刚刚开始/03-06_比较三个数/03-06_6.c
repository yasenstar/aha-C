#include <stdio.h>
#include <stdlib.h>
int main()
{
	// ���꣺�ܱ�4�����������ܱ�100���������ܱ�400���������
    int year;
    printf("������һ����ݣ������������Ƿ�������\n");
    scanf("%d", &year);
    if ( ( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) )
		printf("���%d������\n", year);
    else
		printf("���%d��������\n", year);
	system("pause");
	return 0;
}

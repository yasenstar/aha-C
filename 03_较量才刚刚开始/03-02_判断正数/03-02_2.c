#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("������һ��������");
    scanf("%d", &a);
    // check whether it's positive integer �ж��Ƿ�������
    if (a>0) {
        printf("�������������\n");
    }
    if (a>10) {
        printf("���������һ������10������\n");
    }
    if (a<0) {
		printf("��������Ǹ���\n");
    }
    if (a==0) {
		printf("���������0\n");
    }
	system("pause");
	return 0;
}

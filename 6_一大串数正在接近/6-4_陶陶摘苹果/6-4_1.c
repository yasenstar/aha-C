#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("====����ժƻ��====\n");
    int a[10],h,i,sum;
    sum=0;
    printf("���������յĸ߶ȣ�\n");
    scanf("%d", &h);
    printf("�밴˳������10��ƻ���ĸ߶ȣ�100~200������λΪcm���ÿո����\n");
    for (i=0;i<=9;i++) {
		scanf("%d", &a[i]);
    }
    for (i=0;i<=9;i++) {
		if (a[i]<=h+30) { sum++; }
    }
    printf("�����ܹ�ժ��%d��ƻ����\n", sum);
	system("pause");
	return 0;
}

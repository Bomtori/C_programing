#define _CRT_SECURE_NO_WARNINGS

/* �ǽ� 7 : scanfExample.c
   �ۼ��� : 2022.03.13
   �ۼ��� : �ڹ�ö
   ���α׷� ���� : �ڷ����� ���� scanf ���������� ���
*/
#include <stdio.h> //��ó���κ�

int main()	//�ҽ� ����
{
	/* ���� ����� */
	short    s;	//2byte, %hd
	long     l;	//%ld
	unsigned u;	//%ud

	printf("Enter a short number : ");
	scanf("%hd", &s); //&�� �Է�
	printf("Enter a long number : ");
	scanf("%ld", &l);
	printf("Enter an unsigned number : ");
	scanf("%u", &u);

	printf("\n%hd %ld %u \n", s, l, u);
	return 0;
}

//CRT_SECURE_NO_WARNING ���� ��ܿ�, ���� �溸 ����
/*	�ǽ� 1 : print_value.c
	�ۼ��� : 2022.03.13
	�ۼ��� : �ڹ�ö
	���α׷� ���� : ����� ������ ���
*/

#include <stdio.h>	//��ó�� �κ� stdio.h -> ���Ĵٵ� input,output
//.h �������. �̹� ������� �κ��� Ȱ���Ͽ� ���

int main() {	//�ҽ� ����
	/* ���� ����� */
	char ch = 'M';		//���ڿ� ���� 1byte
	int iValue = 95;	//��� ���� 4byte <-21��
	double dValue = 3.14;	//�Ǽ� ����
	float fValue = 1.414f;	//�Ǽ� ����, f -> �Ǽ�

	printf("\n[ Print value ]\n");	// \n �ٹٲ�
	printf("char : %c \n", 'W'); //W�� %c �ڸ��� ���� char == ���ڿ�
	printf("char variable : %c \n", ch);
	printf("int value : %d \n", 20); // %d ����, int ���
	printf("int constants formula : %d \n", 10 + 20);
	printf("int variable : %d \n", iValue);
	printf("double value : %f \n", 3.1415); //%f �Ǽ�, double �Ǽ�
	printf("double variable : %f \n", dValue);
	printf("float variable : %f \n", fValue); //float �Ǽ�
	printf("int variable : %d and float variable : %f \n", iValue, fValue);
	// iValue %d �ڸ��� ��, fValue %f �ڸ��� ��
	return 0;	//�ҽ� ����
}
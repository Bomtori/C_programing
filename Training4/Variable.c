/*	�ǽ� 4 : Variable.c
	�ۼ��� : 2022. 03. 13
	�ۼ��� : �ڹ�ö
	���α׷� ���� : ���� ������ ������ ����� ���� ������ �� �������� ����ϴ� ���α׷�
*/

#include <stdio.h> //��ó���κ�

int main(void) //�ҽ� ����
{	/* ���� ����� */
	short age = 128;	// short int�� ���� ���� short -> 2byte
	long long int salary = 2500000000;
	double pi = 3.14;	// �Ǽ� ����
	int grade = 2;		// ���� ����
	char credit = 'A';	// ���ڿ� ����

	printf("age = %d \n", age);	//%d ����
	printf("salary = %u \n", salary);		//%ud ��ȣ����
	printf("pi = %f \n", pi);	//%f �Ǽ�
	printf("grade = %d \n", grade);
	printf("credit = %c \n", credit);	//%c ���ڿ�

	return 0;
}	//�ҽ�����
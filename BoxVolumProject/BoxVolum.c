/*	�ǽ� 6 : BoxVolum.c
	�ۼ��� : 2022. 03. 13
	�ۼ��� : �ڹ�ö
	���α׷� ���� : �־��� �ڽ��� ���Ǹ� ���ϴ� ���α׷�
*/

#include <stdio.h> //��ó���κ�

int main(void) //�ҽ� ����
{
	/* ���� ����� */
	int width = 2;
	int height = 3;
	int length = 2;
	int volum = 0;

	volum = width * height * length; //���� ���

	printf("�ʺ�� %d ���̴� %d ���� %d�� ���Ǵ� %d�Դϴ�.", width, height, length, volum);
	
	return 0;
}
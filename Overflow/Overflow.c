/* �ǽ� 3 : Overflow.c
   �ۼ��� :2022.03.13
   �ۼ��� : �ڹ�ö
*/

// file: overflow.c

#include <stdio.h>	//��ó��

int main(void)	//�ҽ� ����
{
	unsigned char	uc = 255 + 1;	//unsigned char ��ȣ�� X
	// 0~255���� 255 + 1 = 256
	short	s = 32767 + 1;	//32767
	float	min = 1.175E-50;
	float	max = 3.403E39;

	printf("%u\n", uc);		//�����÷� �߻�
	printf("%d\n", s);		//�����÷� �߻� %d ����
	printf("%e\n", min);	//����÷� �߻�
	printf("%f\n", max);	//�����÷� �߻�

	return 0;
} //�ҽ� ����
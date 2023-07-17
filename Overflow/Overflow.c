/* 실습 3 : Overflow.c
   작성일 :2022.03.13
   작성자 : 박범철
*/

// file: overflow.c

#include <stdio.h>	//전처리

int main(void)	//소스 시작
{
	unsigned char	uc = 255 + 1;	//unsigned char 부호가 X
	// 0~255까지 255 + 1 = 256
	short	s = 32767 + 1;	//32767
	float	min = 1.175E-50;
	float	max = 3.403E39;

	printf("%u\n", uc);		//오버플로 발생
	printf("%d\n", s);		//오버플로 발생 %d 정수
	printf("%e\n", min);	//언더플로 발생
	printf("%f\n", max);	//오버플로 발생

	return 0;
} //소스 종료
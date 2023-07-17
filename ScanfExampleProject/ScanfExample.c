#define _CRT_SECURE_NO_WARNINGS

/* 실습 7 : scanfExample.c
   작성일 : 2022.03.13
   작성자 : 박범철
   프로그램 설명 : 자료형에 따른 scanf 형식지정자 사용
*/
#include <stdio.h> //전처리부분

int main()	//소스 시작
{
	/* 변수 선언부 */
	short    s;	//2byte, %hd
	long     l;	//%ld
	unsigned u;	//%ud

	printf("Enter a short number : ");
	scanf("%hd", &s); //&은 입력
	printf("Enter a long number : ");
	scanf("%ld", &l);
	printf("Enter an unsigned number : ");
	scanf("%u", &u);

	printf("\n%hd %ld %u \n", s, l, u);
	return 0;
}

//CRT_SECURE_NO_WARNING 제일 상단에, 보안 경보 무시
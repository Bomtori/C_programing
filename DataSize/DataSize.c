/* 실습 2 : dataSize.c
   작성일 : 2022.03.13
   작성자 : 박범철
   프로그램 설명 : sizeof 연산자를 이용한 각 자료형의 크기 확인
*/

#include <stdio.h>	//전처리 부분

int main()	//소스 시작
{
	/* 변수 선언부*/
	char  ch = 'A'; //문자열 선언
	int    i = 65;	//상수 선언
	double d = 3.14;	//실수 선언

	printf("\n[ THE SIZE OF DATATYPE ]\n");	//\n 줄바꿈
	printf("char : %d\n", sizeof(char));	//1byte
	//sizeof == 괄호 안에 사이즈를 재고싶을 때 사용 byte크기가 나온다.
	printf("char ch = \'A\': %d\n", sizeof(ch));
	printf("int : %d\n", sizeof(int));	//4byte, %d 정수
	printf("int i = 65 : %d\n", sizeof(i));
	printf("short int : %d\n", sizeof(short int));
	printf("long int : %d\n", sizeof(long int));
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("double d = 3.14: %d\n", sizeof(d));
	printf("long double : %d\n", sizeof(long double));
	printf("string \'Hello\' : %d\n", sizeof("Hello"));
	printf("default constant 1 : %d\n", sizeof(7));	//4byte
	printf("default constant 2 : %d\n", sizeof(10.12));	//8byte

	return 0;

}	//소스 종료
/*	실습 1 : print_value.c
	작성일 : 2022.03.13
	작성자 : 박범철
	프로그램 설명 : 상수와 변수의 출력
*/

#include <stdio.h>	//전처리 부분 stdio.h -> 스탠다드 input,output
//.h 헤더파일. 이미 만들어진 부분을 활용하여 사용

int main() {	//소스 시작
	/* 변수 선언부 */
	char ch = 'M';		//문자열 선언 1byte
	int iValue = 95;	//상수 선언 4byte <-21억
	double dValue = 3.14;	//실수 선언
	float fValue = 1.414f;	//실수 선언, f -> 실수

	printf("\n[ Print value ]\n");	// \n 줄바꿈
	printf("char : %c \n", 'W'); //W를 %c 자리에 넣음 char == 문자열
	printf("char variable : %c \n", ch);
	printf("int value : %d \n", 20); // %d 정수, int 상수
	printf("int constants formula : %d \n", 10 + 20);
	printf("int variable : %d \n", iValue);
	printf("double value : %f \n", 3.1415); //%f 실수, double 실수
	printf("double variable : %f \n", dValue);
	printf("float variable : %f \n", fValue); //float 실수
	printf("int variable : %d and float variable : %f \n", iValue, fValue);
	// iValue %d 자리에 들어감, fValue %f 자리에 들어감
	return 0;	//소스 종료
}
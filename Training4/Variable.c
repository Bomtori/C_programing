/*	실습 4 : Variable.c
	작성일 : 2022. 03. 13
	작성자 : 박범철
	프로그램 설명 : 값에 적정한 변수를 만들고 값을 저장한 후 변수값을 출력하는 프로그램
*/

#include <stdio.h> //전처리부분

int main(void) //소스 시작
{	/* 변수 선언부 */
	short age = 128;	// short int와 같은 개념 short -> 2byte
	long long int salary = 2500000000;
	double pi = 3.14;	// 실수 선언
	int grade = 2;		// 정수 선언
	char credit = 'A';	// 문자열 선언

	printf("age = %d \n", age);	//%d 정수
	printf("salary = %u \n", salary);		//%ud 부호없이
	printf("pi = %f \n", pi);	//%f 실수
	printf("grade = %d \n", grade);
	printf("credit = %c \n", credit);	//%c 문자열

	return 0;
}	//소스종료
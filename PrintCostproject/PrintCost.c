/*	실습 5 : PrintCost.c
	작성일 : 2022. 03. 13
	작성자 : 박범철
	프로그램 설명 : cost 값을 출력하는 프로그램
*/

#include <stdio.h> //전처리부분

int main(void) //소스 시작
{
	double cost = 0.0; //초기값 선언

	cost = 172.53;

	printf("The sales total is : $\t %f", cost);	//\t tab, %f 실수

	return 0;

}//소스종료

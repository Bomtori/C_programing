/*	실습 6 : BoxVolum.c
	작성일 : 2022. 03. 13
	작성자 : 박범철
	프로그램 설명 : 주어진 박스의 부피를 구하는 프로그램
*/

#include <stdio.h> //전처리부분

int main(void) //소스 시작
{
	/* 변수 선언부 */
	int width = 2;
	int height = 3;
	int length = 2;
	int volum = 0;

	volum = width * height * length; //부피 계산

	printf("너비는 %d 높이는 %d 깊이 %d의 부피는 %d입니다.", width, height, length, volum);
	
	return 0;
}
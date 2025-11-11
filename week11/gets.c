#include <stdio.h>


#define MAX_CHAR 12



int main(void) {

	//문자열을 마지막에 NULL 문자 0을 포함해야 하므로 
	//최대 MAX_CHAR - 1개의 문자까지 저장 가능함
	char input_str[MAX_CHAR];



	printf("카카오뱅크 등록\n");
	printf("이름 입력: ");

	fgets(input_str, MAX_CHAR, stdin);

	printf("%s님 환영합니다", input_str);
	//gets(input_str); 주의! 버퍼 오버플로우 할 수 있다.
	//fgets(입력받을변수







	return 0;
}
#include <stdio.h>

#define STR_MAX 16

//문자열을 정수로 바꾸는 함수

int my_atoi(char string[]) {
	int count = 0;
	int num = 0;

	while (string[count] != 0) {
		if (string[count] == '\n')break;
		num = num * 10 + string[count] - '0'; 
		count++;
	}

	return num;

}


int main(void) {

	int first_num, second_num;

	char first_str[STR_MAX], second_str[STR_MAX];
	printf("1st Num: ");
	fgets(first_str, STR_MAX, stdin);
	printf("2st Num: ");
	fgets(second_str, STR_MAX, stdin);

	//printf("문자합:\n");
	//printf("%s + %s = %s", first_str, second_str, );


	first_num = my_atoi(first_str);
	second_num = my_atoi(second_str);
	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

	return 0;



}



	

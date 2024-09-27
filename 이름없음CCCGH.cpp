#include <stdio.h>

int main(){
	int grade;
	double high;
	
	printf("나이를 입력하세요! : ");
	scanf("%d", &grade);
	printf("당신의 나이는 %d살입니다.\n", grade);
	
	
	printf("키를 입력하세요! : ");
	scanf("%lf", &high);
	printf("내 키는 %.1lfcm.\n", high);
	
	return 0;
}


#include <stdio.h>

int main(){
	int grade;
	double high;
	
	printf("���̸� �Է��ϼ���! : ");
	scanf("%d", &grade);
	printf("����� ���̴� %d���Դϴ�.\n", grade);
	
	
	printf("Ű�� �Է��ϼ���! : ");
	scanf("%lf", &high);
	printf("�� Ű�� %.1lfcm.\n", high);
	
	return 0;
}


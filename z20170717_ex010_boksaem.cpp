#include<stdio.h>
void input();
int age;

main(){
	input(); 
	int s=60;
	if((age>=6)&&(age<12))printf("�ʵ��л��Դϴ�!");
	else if((age>=13)&&(age<15)) printf("���л��Դϴ�!");
	else if((age>=16)&&(age<19)) printf("����л��Դϴ�!");
	else if(age>=19) printf("���л��Դϴ�!");
}


void input(){
	//scanf("�̸��� �Է��ϼ���: %s", name);
	printf("���̸� �Է��ϼ��� :");
	scanf("%d", &age);
	printf("���� : %d\n", age);
}


#include<stdio.h>

void input();
void add();
void output();

char name[100];
int age;

void input(){
	//scanf("�̸��� �Է��ϼ���: %s", name);
	printf("�̸� :");
	scanf("%s", &name);
	printf("���� :");
	scanf("%d", &age);
}


void output(){
	printf("name : %s, age : %d\n"
	       ,name, age);
}

main(){
	input();
	output();
}

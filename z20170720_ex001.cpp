#include<stdio.h>

typedef struct{
	char name[20];
	int no;
}sNameList;

/*
int main(){
	sNameList s;
	sNameList *ptr1;
	printf("Name : ");
	scanf("%s", &s.name);
	printf("\nNumber : ");
	scanf("%d", &s.no);
	
	printf("\n������OFF,�̸� : %s | ��ȣ : %d \n",s.name, s.no);
	
	ptr1 = &s;
	printf("\n(*����ü�������̸�).����̸�");
	//...�߾Ⱦ�. 
	printf("������ON,�̸� : %s | ��ȣ : %d \n"
	       ,(*ptr1).name, (*ptr1).no);
	//...�̷��� ǥ����. 
	printf("\n����ü�������̸�->����̸�");	       
	printf("������ON,�̸� : %s | ��ȣ : %d \n"
	       ,ptr1->name, ptr1->no);
	
	return 0;
}*/

/*
struct info_person{
	char name[10];
	int age;
	float weight;
};
struct group{
	char schoolName[20];
	char major[20];
	struct info_person *info;
};

int main(void){
	struct info_person inf={"2Be", 20, 62};
	struct group grp={"�ҳ�","�ڵ�������"};
	grp.info = &inf;
	
	printf("your input is...\n");
	printf("schoolName : %s \n", grp.schoolName);
	printf("major : %s \n", grp.major);
//...����ü������:http://blog.naver.com/myroom9/220249065886	
	printf("name : %s \n", (*grp.info).name);
	printf("age : %d�� \n", (*grp.info).age);
	printf("weight : %.1fKg \n", (*grp.info).weight);
	
	return 0;	
} 
*/

//...������ : http://blog.naver.com/beta700/221045696507
int main(){
	int a=5;
//...*����Ʈ������ =&����Ʈ�ּҺ���.
	int *c=&a;
	printf("c�� ������ ��� %d \n",*c);
	return 0;
}

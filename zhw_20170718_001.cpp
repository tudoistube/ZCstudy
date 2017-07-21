
// 20170718 ������ 
//...http://cafe.naver.com/shnpmomplayground/79789
//...http://blog.naver.com/jongha798/221049885115

 
#include<stdio.h>
void notice();
void input();
void cal_base_amt();
void cal_used_amt();
void cal_amt();
void call_cal_used_amt(int n);
void cal_sum_amt();

float input_used;
float base_cost;
float used_cost;

float base_amt;
float used_amt;
float sum_amt;
//----------------
void info();
void select_menu();
void charge(int price);
void cul();
void output();

int age;
int s_menu;
int c_ticket; 
int total;


 main(){
	notice(); 
	input();
	cal_base_amt(); 
	cal_amt();
	//cal_used_amt();
	//select_menu(); 
	//cul();
	//output();
}


void notice(){
	printf("\n------------------------------------------------\n");
	printf("  ������ ������ ��� ���α׷��Դϴ�.\n\n\n");
	printf("     [�⺻��� �ȳ�]\n\n");
	printf("  ��뷮              |     �ݾ�(��) \n");
	printf("  100kw ���ϻ��(1)   |     410 �� \n");
	printf("  101~200kwh ���(2)  |     910 �� \n");
	printf("  201~300kwh ���(3)  |     1,600 �� \n");	
	printf("  301~400kwh ���(4)  |     3,850 �� \n");
	printf("  401~500kwh ���(5)  |     7,300 �� \n");		
	printf("  501kwh~ ���(6)     |     12,940 �� \n");	
	printf("\n\n\n");
	printf("     [���·� ��� �ȳ�]\n\n");
	printf("  ��뷮              |     �ݾ�(��) \n");
	printf("  100kw ���ϻ��(1)   |     60.7 �� \n");
	printf("  101~200kwh ���(2)  |     125.9 �� \n");
	printf("  201~300kwh ���(3)  |     187.9 �� \n");	
	printf("  301~400kwh ���(4)  |     280.6 �� \n");
	printf("  401~500kwh ���(5)  |     417.7 �� \n");		
	printf("  501kwh~ ���(6)     |     709.5 �� \n");	
	printf("\n");	
	printf("\n------------------------------------------------\n");

}
void input(){
	printf("�ݾ��� ���ϱ� ���� ���� ��뷮�� �Է��ϼ��� : ");
	scanf("%f",&input_used);
	printf("�Է��� ���� ��뷮�� %f �Դϴ�.\n", input_used);
}
void cal_base_amt(){
	if (input_used > 500)	{
		base_cost = 12940;
	}
	else if((input_used >= 401)&&(input_used <= 500)){		
		base_cost = 7300;
	}	
	else if((input_used >= 301)&&(input_used <= 400)){		
		base_cost = 3850;
	}
	else if((input_used >= 201)&&(input_used <= 300)){		
		base_cost = 1600;
	}	
	else if((input_used >= 101)&&(input_used <= 200)){		
		base_cost = 910;
	}
	else {
		base_cost = 410;
	}

	printf("��뷮�� %f ���̰�, �⺻����� %f ���Դϴ�.\n"
	       , input_used, base_cost, sum_amt);	
	
}


void cal_amt(){
	int div = input_used / 100;
	int mod = (int)input_used % 100;
	printf("������ %d �Դϴ�.\n", mod);	
	do{		
		div = div - 1;
		printf("��뱸�� %d �Դϴ�.\n", div);	
		call_cal_used_amt( div);
	}while(div > 0);
	
	if(mod > 0) {
		sum_amt = sum_amt + base_cost + mod * 60.7;
	}
	
	printf("���·� ��� �հ�� %f �� �Դϴ�.\n", sum_amt);	
}

void call_cal_used_amt( int p_input){
	if (p_input > 6)	{
		used_cost = 709.5;
	}
	else if(p_input >= 5){		
		used_cost = 417.7;
	}	
	else if(p_input >= 4){		
		used_cost = 280.6;
	}
	else if(p_input >= 3){		
		used_cost = 187.9;
	}	
	else if(p_input >= 2){		
		used_cost = 125.9;
	}
	else {
		used_cost = 60.7;
	}
	sum_amt = sum_amt + used_cost*100;
	printf("��뷮�� %f ���̰�, ���� �ܰ��� %f �� �Դϴ�.\n", input_used, used_cost);		
	
}

#include<stdio.h>
//...http://blog.naver.com/nasu0210/220619649781 
/*
...1.1.����.
13425
12345 

 int main(){
	int a[] = {1,3,4,2,5};
	int zsize = sizeof(a)/sizeof(int);
	
	printf("zsize : %d \n", zsize);
	
	for(int i=0; i<zsize; ++i){
		printf("%d", a[i]);
	}
	printf("\nsort begins...\n");
	
	int temp = 0;	
	for(int i=0; i<=4; ++i){
		for(int j=0; j<=4; ++j){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i=0; i<5; ++i){
		printf("%d", a[i]);
	}

	return 0;
}
*/

/*
...1.2.���� : �Լ� ���·� ����.
13425
12345 

void zsort(int a[], int n);

int main(){
	int a[] = {1,3,4,2,5};
	int zsize = sizeof(a)/sizeof(int);
	
	printf("zsize : %d \n", zsize);
	
	for(int i=0; i<zsize; ++i){
		printf("%d", a[i]);
	}
	printf("\nsort begins...\n");
	
	zsort(a, zsize);
	
	return 0;
}

void zsort(int a[], int n){
	
	int temp = 0;	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i=0; i<n; ++i){
		printf("%d", a[i]);
	}
	return;
}
*/

//...2.����ü�� �迭Ȱ�� : http://blog.naver.com/nasu0210/220815341861
#define MAX 3
struct sFoodMenu{
	//char *name;
	char name[20];	 
	int price;
	int score; 
};

int main(){
	struct sFoodMenu s[MAX], temp;
//...scanf ���ڿ� �Է¹ޱ�.
//...http://m.post.naver.com/viewer/postView.nhn?volumeNo=8390343&memberNo=1991839	
//...scanf ����ü �Է¹ޱ�. 
//...http://kin.naver.com/qna/detail.nhn?d1id=1&dirId=1040101&docId=143373827&qb=c2NhbmYgJiDqtazsobDssrQ=&enc=utf8&section=kin&rank=1&search_sort=0&spq=0&pid=TT/eNdpySDVssco7Zfhssssssbl-451787&sid=GQ/uVenJofGJggVyU/YJXw%3D%3D

	printf("�� ������ �������� 1��° �����̸��� �Է��ϼ��� : ");
	scanf("%s", &s[0].name);
	printf("������ ���ΰ���? : ");
	scanf("%d", &s[0].price);
	printf("����1�� �Ӹ��ӿ� �������� Ƚ����  1~10 ������ ������ �ޱ�ٸ� �����ΰ���? : ");
	scanf("%d", &s[0].score);
	printf("\n\n");
	
	printf("�� ������ �������� 2��° �����̸��� �Է��ϼ��� : ");
	scanf("%s", &s[1].name);
	printf("������ ���ΰ���? : ");
	scanf("%d", &s[1].price);
	printf("����2�� �Ӹ��ӿ� �������� Ƚ����  1~10 ������ ������ �ޱ�ٸ� �����ΰ���? : ");
	scanf("%d", &s[1].score);
	printf("\n\n");
		
	printf("�� ������ �������� 3��° �����̸��� �Է��ϼ��� : ");
	scanf("%s", &s[2].name);
	printf("������ ���ΰ���? : ");
	scanf("%d", &s[2].price);
	printf("����3�� �Ӹ��ӿ� �������� Ƚ����  1~10 ������ ������ �ޱ�ٸ� �����ΰ���? : ");
	scanf("%d", &s[2].score);
	printf("\n\n");
	
	printf("���� �������� ������ �����̸�, ���� �׸��� �������� ����\n");		
	for(int i=0; i<MAX; ++i){
		printf("%d. �����̸� : %s | ���� : %d | ���� : %d \n"
		       , i, s[i].name, s[i].price, s[i].score);		
	}
	
	printf("\n\n");
	printf("���� ������ ���������� ������� ���� ���ְ� ����^_____^!!!\n");

	/*
	for(int i=0; i<MAX; ++i){
		for(int j=0; j<MAX; ++j){
			if(s[i].score<s[j].score){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	*/
	for(int i=0; i<MAX; ++i){
		for(int j=0; j<MAX; ++j){
			if(s[i].score>s[j].score){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	
	for(int i=0; i<MAX; ++i){
		printf("%d���� ���� �̸�: %s ����: %d �������� ���� : %d \n"
		       , i, s[i].name, s[i].price, s[i].score);
	}	
	
	return 0;
}

//...���� ���� ����. 
//...����ü ������. 
//...http://blog.naver.com/skout123/50132236162
//...����ü �迭�� ����ü ������.
//...http://blog.naver.com/skout123/50132243574




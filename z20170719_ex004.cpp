//...����� :http://blog.naver.com/nasu0210/220616964949
#include<stdio.h>
/*
...1. 1-2+3-4+5.......+99-100�� �հ踦 ���ϱ�.

int main(){
	int sign=1;
	int mod = 0;
	int sum = 0;
	char add = '+';
	for(int i=1; i<=100; i++){
		mod=i%2;
		if(mod==0){
			sign=-1;
			add = ' ';
			
		}else{
			sign=1;
			add = ' +';
		}
		printf("%c %d",add, i*sign, add);
		sum=sum+i*sign;
		//printf("\n sum: %d %d",i, sum);
		
	}
	printf("\n sum = %d", sum);
	return 0;
}
*/

/*
...2. 1+2+4+7+.... 20��° �ױ��� �հ踦 ���ϱ�. 
...2.1.do while.
int main(void) {
	int i=0; 
	int sum=1;
	int total=1;
	printf("%d ", sum);
	do{
		i=i+1;
		//printf("i:%d \n",i);
		sum=sum+i;		
		printf("%d ", sum);
		total = total+sum;		
	}while(i<19);
	
	printf("\ntotal :%d \n",total);
	return 0;
}
*/
//...2.2.for.
int main(void) {
	int sum=1;
	int total=1;
	for(int i=1;i<20;++i){
		sum=sum+i;
		total=total+sum;
		printf("i:%d, sum:%d,total:%d  \n",i,sum,total);
	}
	return 0;
}














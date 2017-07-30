#include <stdio.h>
/*
...S.1+2+3+...+100 ������ �հ� ���ϱ�(Section010). 

int main()
{
	int i, j;
	i=0, j=0;
	do {
		i++;
		j += i;
	}while( i < 100 );
	
	printf("1+2+3+...+100 ������ �հ� ���ϱ�(Section010). \n");
	printf("1~%d���� ���� ���ϸ� : %d \n", i, j);
	
	return 0;
}
...E.1+2+3+...+100 ������ �հ� ���ϱ�(Section010).  */

/*
...S.1+3+5+...+99 ������ �հ� ���ϱ�(Section010). 

int main()
{
	int i, j;
	i=1, j=0;
	do {
		j += i;
		i = i + 2;		
	}while( i < 100 );
	
	printf("1+3+5+...+99 ������ �հ� ���ϱ�(Section010) \n");
	printf("1~%d���� Ȧ���� ���ϸ� : %d \n", i, j);
	
	return 0;
}
...E.1+3+5+...+99 ������ �հ� ���ϱ�(Section010).*/

/*
...S.1-2+3-4+5-6...+99-100 ������ �հ� ���ϱ�(Section011). 
int main()
{
	int i, temp, j;
	i = 0; temp = 0; j = 0;
	do {
		++i;		
		if((i%2) == 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = j + temp;
		printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	}while( i < 100 );
	
	printf("1-2+3-4+5-6...+99-100 ������ �հ� ���ϱ�(Section011) \n");
	printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	
	return 0;
}
...E.1-2+3-4+5-6...+99-100 ������ �հ� ���ϱ�(Section011). */

/*
...S.1-2+3-4+5-6...-98+99 ������ �հ� ���ϱ�(Section011). 

int main()
{
	int i, temp, j;
	i = 0; temp = 0; j = 0;
	do {
		++i;		
		if((i%2) == 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = j + temp;
		printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	}while( i < 99 );
	
	printf("1-2+3-4+5-6...+99-100 ������ �հ� ���ϱ�(Section011) \n");
	printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	
	return 0;
}

...E.1-2+3-4+5-6...-98+99 ������ �հ� ���ϱ�(Section011).  */

/*
...S.1-2+3-4+5-6...-98+99 ������ �հ� ���ϱ�(Section011). 

int main()
{
	//...odd : ���� ���� ������.
	//...even : ���� ���� ������.
	//...j : 1�� ����.
	//...k : ¦��, Ȧ�� �Ǻ���.
	//...g : j*s �� ���� �����.
	//...s : -1, 1�� �ݺ��ϴ� ����ġ ����. 
	int even, odd, k, g, s, j;
	
	even = 0, odd = 0, k = 0, g = 0;
	s = -1, j = 1;
	
	do{
		k = j/2 * 2;
		s *= -1;
		g = j*s;
		
		if(k==j){//...¦���� �����. 
			even += g;
		}else{
			odd += g;
		}
		j++;
		printf("k=%d | s=%d | j=%d | g=%d \n", k, s, j, g);
	}while(j<=99);
	
	printf("k=%d | s=%d | j=%d | g=%d \n", k, s, j, g);
	
	return 0;
}

...E.1-2+3-4+5-6...-98+99 ������ �հ� ���ϱ�(Section011).  
*/


/*
...S.(-1)*2*(-3)*4*(-5)*...*100 ������ �հ� ���ϱ�(Section011-03). 

int main()
{
	int i, temp;
	double j;
	i = 0; temp = 0; 
	j = 1.0;
	do {
		++i;		
		if((i%2) != 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = j * temp;
		printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	}while( i < 99 );
	
	printf("(-1)*2*(-3)*4*(-5)*...*100 ������ �հ� ���ϱ�(Section011-03) \n");
	printf("i = %d | temp = %d | j = %11.4e \n", i, temp, j);
	
	return 0;
}

...E.(-1)*2*(-3)*4*(-5)*...*100 ������ �հ� ���ϱ�(Section011-03).   */

/*
...S.(-1/2)+(2/3)+(-3/4)+(4/5)+(-5/6)*...-(99/100) ������ �հ� ���ϱ�(Section012). 

int main()
{
	float i, j, temp, sum;
	i = 0; j = 0; sum = 0;
	do {
		++i;
		if(((int)i%2) != 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = i+1;
		sum = sum + (temp/j);
		
		printf("temp / j = %f / %f | sum = %f \n", temp, j, sum);
	}while( i < 99 );
	
	printf("(-1/2)+(2/3)+(-3/4)+(4/5)+(-5/6)*...-(99/100) ������ �հ� ���ϱ�(Section012). \n");
	printf("temp / j = %f / %f | sum = %f \n", temp, j, sum);
	
	return 0;
}

...E.(-1/2)+(2/3)+(-3/4)+(4/5)+(-5/6)*...-(99/100) ������ �հ� ���ϱ�(Section012).    */


/*
...S.1+2+4+7+11+16+22+... �� �����ϴ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013). 
�ó��� 2017 ����ó����� �Ǳ� 1�� �ǹ� �˰��� ���� 3�� �⺻�˰��� ���� 145p.
http://cafe.gilbut.co.kr/it/qna/qnaView.aspx?seq=415598&page=1&search=title_content&searchword=%EC%88%98%EC%97%B4&qnagubun=A&sergubun1=001000000&sergubun2=001001000&sergubun3=001001002&serbook=&serpart=&sortgubun=&cntTF=T

int main()
{
	//...i : 1, 2, 3, ..., 19
	//...j : 1, 2, 4, 7, 11 ...
	//...k : 1+2+4+7+11 ...
	int i, j, k;
	
	i = 0; j = 1; k = 1;
	
	do{
		i++;
		j+=i;
		k+=j;
		printf("i = %d, j = %d, k = %d \n", i, j, k);
	}while(i<19);
	
	printf("1+2+4+7+11+16+22+... �� �����ϴ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013).  \n");
	printf("i = %d, j = %d, k = %d \n", i, j, k);
	
	return 0;
}

...E.1+2+4+7+11+16+22+... �� �����ϴ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013). */


/*
...S.1+3+6+10+15+21+28+... �� �����ϴ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013-01). 
�ó��� 2017 ����ó����� �Ǳ� 1�� �ǹ� �˰��� ���� 3�� �⺻�˰��� ���� 148p.
int main()
{
	//...i : 1, 2, 3, ..., 19
	//...j : 1, 2, 4, 7, 11 ...
	//...k : 1+2+4+7+11 ...
	int i, j, k;
	
	i = 0; j = 0; k = 0;
	
	do{
		i++;
		j+=i;
		k+=j;
		printf("i = %d, j = %d, k = %d \n", i, j, k);
	}while(i<20);
	
	printf("1+3+6+10+15+21+28+... �� �����ϴ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013).  \n");
	printf("i = %d, j = %d, k = %d \n", i, j, k);
	
	return 0;
}

...E.1+3+6+10+15+21+28+... �� �����ϴ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013-01).
*/


/*
...S.-1+2-4+7-11+16-22... �� �����Ǵ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013-02). 
http://cafe.gilbut.co.kr/it/qna/qnaView.aspx?seq=208291&page=1&search=title_content&searchword=-1%2B2-4%2B7-11&qnagubun=A&sergubun1=001000000&sergubun2=001001000&sergubun3=001001002&serbook=&serpart=&sortgubun=&cntTF=T

int main()
{
	//...i : ������(1~19), L : ����ġ����(1 || -1), j : ������ ����, k : �հ�.
	int i, j, k, L;
	//...�ʱⰪ�� �ְ� 19���� ������ 20��° �ױ��� �ջ���. 
	i = 0; 
	j = 1; 
	L = -1, 
	k = j*L;
	printf("i : %d | j : %d | L : %d | k = %d \n", i, j, L, k);
	
	do{
		i++;
		j+=i;
		L*=-1;
		k += j * L;
		printf("i : %d | j : %d | L : %d | k = %d \n", i, j, L, k);
	}while(i<19);
	
	printf("-1+2-4+7-11+16-22... �� �����Ǵ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013-02).  \n");
	printf("i : %d | j : %d | L : %d | k = %d \n", i, j, L, k);
	
	return 0;
}

...E.-1+2-4+7-11+16-22... �� �����Ǵ� ������ 20��° �ױ����� �հ踦 ���ϱ�(Section013-02).   */


/*
...S.1!+2!+3!+4!+5!+...+10! �� �����Ǵ� ������ 10��° �ױ����� �հ踦 ���ϱ�(Section014). 

int main()
{
	//...i : ������(1~10), 
	//...j : 1!, 2!, 3!, ... ������ �� ��. 
	//...k : �հ�.
	int i, j, k, L;
	//...�ʱⰪ�� �ְ� 19���� ������ 20��° �ױ��� �ջ���. 
	i = 1; 
	j = 1;  
	k = 1;
	printf("i : %d | j : %d | k = %d \n", i, j, k);
	
	do{
		i++;
		j*=i;
		k += j;
		printf("i : %d | j : %d | k = %d \n", i, j, k);
	}while(i<10);
	
	printf("1!+2!+3!+4!+5!+...+10! �� �����Ǵ� ������ 10��° �ױ����� �հ踦 ���ϱ�(Section014). \n");
	printf("i : %d | j : %d | k = %d \n", i, j, k);
	
	return 0;
}

...E.1!+2!+3!+4!+5!+...+10! �� �����Ǵ� ������ 10��° �ױ����� �հ踦 ���ϱ�(Section014).    
*/



/*
...S.1+1+2+3+5+8+13+... �� �����Ǵ� �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���ϱ�(Section015). 

int main()
{
	//...A, B, C : ù��°, �ι�°, ����° ��. 
	//...CNT, HAP.
	int hap, cnt, c;
	int a = 1, b =1 ; 
	
	hap = a + b; 
	cnt = 2;  
	
	while(1){
		c =a + b;
		hap += c;
		cnt++;
		if(cnt < 20){
			a = b;
			b = c;
		}else{
			printf("hap = %d", hap);
			break;
		}
	}
	
	return 0;
}

...E.1+1+2+3+5+8+13+... �� �����Ǵ� �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���ϱ�(Section015). 
*/


/*
...S.1+1+2+3+5+8+13+... �� �����Ǵ� �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���ϱ�(Section015-01). 

int main()
{
	//...A, B, C : ù��°, �ι�°, ����° ��. 
	//...CNT, HAP.
	int hap, cnt, c;
	int a = 1, b =1 ; 
	
	hap = a + b; 
	printf("���° �׸���� ����ұ��? ");
	scanf("%d", &cnt);
	
	for(int i=3; i<=cnt; i++){
		c =a + b;
		hap += c;
		a = b;
		b = c;
		printf("%d��°, hap = %d \n", i, hap);
	}
	
	return 0;
}

...E.1+1+2+3+5+8+13+... �� �����Ǵ� �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���ϱ�(Section015-01). 
*/

/*
...S.1+1+2+3+5+8+13+... �� �����Ǵ� �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���ϱ�(Section015-01). 

int main()
{
	//...A, B, C : ù��°, �ι�°, ����° ��. 
	//...CNT, HAP.
	int hap, cnt, c;
	int a = 1, b =1 ; 
	
	hap = a + b; 
	printf("���° �׸���� ����ұ��? ");
	scanf("%d", &cnt);
	
	for(int i=3; i<=cnt; i++){
		c =a + b;
		hap += c;
		a = b;
		b = c;
		printf("%d��°, hap = %d \n", i, hap);
	}
	
	return 0;
}

...E.1+1+2+3+5+8+13+... �� �����Ǵ� �Ǻ���ġ ������ 20��° �ױ����� �հ踦 ���ϱ�(Section015-01). 
*/


/*
...S.(77*1)+(76*2)+(75*3)+...+(2*76)+(1*77) �� �����Ǵ� ����. 

int main()
{
	//...p: 1�� �����Ǵ� ���ڰ� ����� ����. 
	//...q: 1�� ���ҵǴ� ���ڰ� ����� ����.
	//...m: ������ ���� ����� ����.
	//...h: ������ ���� ���Ǿ� ����� ����. 
	int p = 0, q, m;
	double h;
	
	do{
		p++;
		q = 78 - p; //...77���� 1�� ���ҽ�Ŵ. 
		m = q*p;
		h+=(double)m;
		//...printf format : http://blog.naver.com/zlaehdn/220754569070
		printf("p=%d | q=%d | m=%d | h=%lf \n", p, q, m, h);
	}while(p<77);
	
	return 0;
}

...E.(77*1)+(76*2)+(75*3)+...+(2*76)+(1*77) �� �����Ǵ� ����. 
*/


/*
...S.1+(1/1)+(1/2)+(1/3)+...+(1/10) �� �����Ǵ� ����. 

int main()
{
	//...a : �и�, d: �м���. 
	float hap, a, d;
	hap = 1, a =1;
	
	do{
		d = 1/a;
		hap += d;
		a++;
		printf("a=%f, d=%f, hap=%.2f \n", a, d, hap);
	}while(a<=10);
	
	return 0;
}

...E.1+(1/1)+(1/2)+(1/3)+...+(1/10) �� �����Ǵ� ����. 
*/

/*
...S.������ ���� �Է¹޾� �Ҽ����� �Ǻ��ϱ�(Section016-01). 

int main()
{
	//...a : �Է¹޴� ��.
	//...i : a ���� 1 ���� ���� �����.
	//...j : 2���� i���� 1�� �����Ǵ� ���ڰ� �����. 
	int a, i, j;
	
	printf("�Ҽ����� �Ǵ��ؾ��� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	i = a - 1;
	j = 2;
	while(1){
		if(j<=i){
			if((a%j)==0){
				printf("a%j : %d\%%d, �Ҽ��� �ƴ� \n", a, j);
				break;
			}else{
				j++;
			}
		}else{
			printf("�Ҽ��� \n");
			break;
		}
	}	
	
	return 0;
}

...E.������ ���� �Է¹޾� �Ҽ����� �Ǻ��ϱ�(Section016-01). 
*/


/*
...S.������ ���� �Է¹޾� �Ҽ����� �Ǻ��ϱ�(Section016-02). 

int main()
{
	//...a : �Է¹޴� ��.
	//...j : 2���� a���� 1�� �����Ǵ� ���ڰ� �����. 
	int a, j;
	
	printf("�Ҽ����� �Ǵ��ؾ��� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	j = 2;
	while(a%j !=0){
		j++;
	}	
	if(a==j){
		printf("�Ҽ��� \n");
	}else{
		printf("�Ҽ��� �ƴ� \n");
	}
	
	return 0;
}

...E.������ ���� �Է¹޾� �Ҽ����� �Ǻ��ϱ�(Section016-02). 
*/


/*
...S.������ ���� �Է¹޾� �Ҽ����� �Ǻ��ϱ�(Section016-03). 

#include <math.h>
int main()
{
	//...a : �Է¹޴� ��.
	//...j : 2���� a���� 1�� �����Ǵ� ���ڰ� �����. 
	int a, j;
	
	printf("�Ҽ����� �Ǵ��ؾ��� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	j = 2;
	
	while(1) {
		if(j<=sqrt(a)){
			if(a%j == 0){
				//...�ۼ�Ʈ(%)��� : http://blog.naver.com/gamees/10095421735 
				printf("a%%j = %d%%%d : �Ҽ� �ƴ� \n", a, j);
				break;
			}
			else{
				j++;
			}
		}else{
			printf("�Ҽ���\n");
			break;
		}
	}
	
	return 0;
}

...E.������ ���� �Է¹޾� �Ҽ����� �Ǻ��ϱ�(Section016-03). 
*/


/*
...S.������ ���� �Է¹޾� �� �ȿ� ���Ե� �Ҽ��� �� ���ϱ�(Section017). 

int main()
{
	//...a : �Է¹޴� ��.
	//...j : �Ҽ����� �Ǻ��� �� ����� ����� ����� ����. 
	//...k : �Ҽ����� �Ǻ��� ���ڰ� ����� ����(if A = 10, then k = 2 ~10). 
	//...hap : �Ҽ��� ������ ����. 
	int a, hap, j, k;
	
	printf("������ ���� �Է¹޾� �� �ȿ� ���Ե� �Ҽ��� �� ���ϱ� : ");
	scanf("%d", &a);
	hap = 0;
	k = 2;
	
	while(1){
		j = 2;
		while(k%j !=0 ){
			j++;
		}
		if(k==j){ //...�Ҽ���. 
			hap+=k;
			printf("k=%d | j = %d | hap = %d \n", k, j, hap);
		}
		if(k<a){
			k++;
		}else{
			printf("hap = %d \n", hap);
			break;
		}
		
	}
	
	
	
	return 0;
}

...E.������ ���� �Է¹޾� �� �ȿ� ���Ե� �Ҽ��� �� ���ϱ�(Section017). 
*/

/*
...S.�迭 a[99] �� 2~100 ������ ������ ���, �� �迭 �ȿ� ���Ե� �Ҽ��� ���� ���ϱ�(Section018). 
	�ó��� 2017 ����ó����� �Ǳ� 1�� �ǹ� �˰��� ���� 3�� �⺻�˰��� ���� 179p.
	
int main()
{
	//...a[99] : 2~100 �� ��� �迭.
	//...k : 2���� 100���� 1�� �����ϴ� ��. 
	//...i : �迭�� ��ġ.
	//...j : �Ҽ��� ������ �����.
	//...m : �Ҽ��� ����� ����ִ� ��ġ�� ������ ����. 
	int k, i, j, m;
	int a[99];
	
	k=1;
	do{
		k++;
		//...�迭�� ��ġ�� 0���� �����ϹǷ�, �迭 a �� ù��° ��ġ�� a[0]�� 
		//...k�� �����ϱ� ���� a[k-2]�� ������. 
		a[k-2] = k;
		int temp = k-2;
		printf("a[%d] = %d \n", temp, k);
	}while(k<100);
	
	//...�迭 a �� ÷�� i �� i++ ������ 0�� �ǵ��� -1�� �ʱ�ȭ��. 
	i=-1, j=0;
	
	printf("�Ҽ� �Ǻ� ����...\n");
	while(1){
		i++;
		//...c���� �迭�� ��ġ�� 0���� �����ϹǷ�, i �� 0~98���� 99�� �ݺ���. 
		if(i>98){
			printf("�Ҽ��� ���� : %d", j);
			break;
		}
		
		if(a[i]==0){
			continue;
		}
		j++;
		m = i;
		while(1){
			m += a[i];
			if(m>99) break;
			printf("a[%d] = %d \n",m, a[m]);
			a[m] = 0;
		}
	}
	return 0;
}

...E.�迭 a[99] �� 2~100 ������ ������ ���, �� �迭 �ȿ� ���Ե� �Ҽ��� ���� ���ϱ�(Section018). 
*/


/*
...S.�μ��� �Է¹޾� �μ��� �ִ�����, �ּҰ������ ���ϱ� : ��Ŭ���� ȣ����(Section019).  

int main()
{
	//...��Ŭ���� ȣ���� : gcm(�ִ�����) = a * b / lcm(�ּҰ����). 
	int a, b, big, small, mok, nameji, gcm, lcm;
	printf("�ִ������� �ּҰ������ ���� �μ��� �Է��ϼ���. ");
	scanf("%d %d", &a, &b);
	
	if(a>=b){
		big = a ;
		small = b;
	}else{
		big = b;
		small = a;
	}
	
	while(1){
		mok = big/small;
		nameji = big - mok*small;
		if(nameji == 0){
			gcm = small;
			lcm = a*b/gcm;
			printf("�ִ����� = %d | �ּҰ���� = %d \n", gcm, lcm);
			break;
		}
		big = small;
		small = nameji;
	}
	
	return 0;
}

...E.�μ��� �Է¹޾� �μ��� �ִ�����, �ּҰ������ ���ϱ� : ��Ŭ���� ȣ����(Section019).  
*/


/*
...S.����� ���ϱ�(Section020).  

int main()
{
	int b, mok, nameji, i;
	int a[100];
	
	printf("����� ���� ���� �Է��ϼ��� : ");
	scanf("%d", &b);
	//...�迭�� ������ 0���� �ǵ��� d �� -1 �� ������. 
	int c = 0, d = -1;
	
	while(1){
		c++;
		if(c <= b){
			mok = b / c;
			nameji = b - mok*c;
			printf("mok = %d | b = %d | c = %d | nameji = %d \n", mok, b, c, nameji);
			if(nameji == 0){
				d++;
				a[d] = c;
				printf("a[%d] = %d \n", d, c);
			}
		}else{
			printf("%d �� ����� \t", b);
			for(i=0; i<=d; i++){
				printf(" %d\t", a[i]);
			}
			break;
		}
	}
	
	return 0;
}

...E.����� ���ϱ�(Section020).  
*/


/*
...S.���μ� �����ϱ�(Section021).  
	�ó��� 2017 ����ó����� �Ǳ� 1�� �ǹ� �˰��� ���� 3�� �⺻�˰��� ���� 188p. 

#include <math.h>
int main()
{
	int b, c, d, e, mok, nameji, originInput;
	int a[100];
	
	printf("���μ� ���ظ� ���� ���� �Է��ϼ��� : ");
	scanf("%d", &b);
	originInput = b;
	
	c = -1; //...�迭a[0]���� �����ϰ� ��.
	d = 2;
	
	while(1){
		e = (int)sqrt(b); //...�������� ������ ����.
		
		while(1) {
			if(d>e){
				d = b;
				break;
			}
			mok = b/d;
			nameji = b - mok*d;
			
			if(nameji == 0){
				break;
			}else{
				d++; //...b�� ���� ���� ������Ŵ. 
			}
		}
		c++;
		a[c] = d;
		printf("���μ� a[%d] = %d \n", c, d);
		if(b == d){
			break;
		}
		b = mok;
	}
	printf("%d �� ���μ� ���� ��� \n", originInput);
	for(int i=0; i<=c; i++){
		printf("%d \t", a[i]);
	}
	
	return 0;
}

...E.���μ� �����ϱ�(Section021).  
*/


/*
...S.10������ 2������ ��ȯ�ϱ�(Section022).  
	�ó��� 2017 ����ó����� �Ǳ� 1�� �ǹ� �˰��� ���� 3�� �⺻�˰��� ���� 191p. 
*/
#include <math.h>
int main()
{
	int b, bInputted, c, mok, nmg, i;
	int a[10];
	printf("2������ ��ȯ�� ���� �Է��ϼ���.");
	scanf("%d", &b);
	bInputted = b;
	c = -1; //...a[0]���� �����ϱ� ����. 
	
	do{
		c++;
		mok = b / 2;
		nmg = b -mok * 2;
		a[c] = nmg;
		b = mok;
		
	}while( mok !=0 );
	
	printf("�Է¹��� �� %d �� 2������ ��ȯ�� ��� \n", bInputted);
	
	for(i = c; i >=0; i--){
		printf("%d", a[i]);
	}
	
	return 0;
}
/*
...E.������ȯ�ϱ�(Section022).  
*/


/*
...S.������ȯ�ϱ�(Section022-01).  
	�ó��� 2017 ����ó����� �Ǳ� 1�� �ǹ� �˰��� ���� 3�� �⺻�˰��� ���� 195p. 
     2�� ���� �������� �迭�� ���ʺ��� �����ϸ� ����� �� �տ������� ���ʴ�� ����� �� ����. 

#include <math.h>
int main()
{
	int b, bInputted, c, mok, nmg, k, i;
	int a[10];
	
	
	printf("2������ ��ȯ�� ���� �Է��ϼ��� : ");
	scanf("%d", &b);
	bInputted = b;
	
	c = -1; //...a[0]���� �����ϵ��� �ϱ� ���� �ʱⰪ ����.
	do{
		c++;
		mok = b/2;
		nmg = b - mok *2;
		
		printf("c = %d | nmg = %d \n", c, nmg);
		//...�迭�� ���ʺ��� ���ʴ�� ����Ƿ� a[zsize-c]�� ������. 
		a[c] = nmg;
		b = mok;
		
	} while(mok!=0);
	
	printf("2������ ��ȯ�� �� : %d \n", bInputted);
	//...�迭�� ��ġ�� 0���� �����ϹǷ� 2������ �� ù��° ��ġ�� ����. 
	k = 9 - c;
	printf("%d = 9 - %d \n", k, c);
		
	for(i=k; i<10; i++){
		printf("%d", a[i]);
	}
	
	
	return 0;
}

...E.������ȯ�ϱ�(Section022-01).  
*/


















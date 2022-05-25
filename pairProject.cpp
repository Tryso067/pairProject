#include<stdio.h>
#include<stdlib.h>
#define N 30

void main(){
    int i;
    printf("随机生成%d个四则运算以及结果：\n",N);
//循环生成
	for(i=0;i<N;i++){
		int a=rand()%10+1,c=rand()%10+1,e=rand()%10+1;
		int b=rand()%4+1,d=rand()%4+1;
		int sum=0;    //存储结果
		char x,y;    //运算符号
	//第一个运算符号生成
		switch(b){
			case 1:
				x='+';
				break;
			case 2:
				x='-';
				break;
			case 3:
				x='x';
				break;
			case 4:
				x='%';
				break;
		}
	//第二个运算符号生成
		switch(d){
			case 1:
				y='+';
				break;
			case 2:
				y='-';
				break;
			case 3:
				y='x';
				break;
			case 4:
				y='%';
				break;	
		}
	//根据运算符号判断运算顺序（先乘除后加减）
		if(y=='x'){
			if(x=='+'){
				sum=c*e;
				sum=sum+a;
			}
			else if(x=='-'){
				sum=c*e;
				sum=a-sum;
			}
			else if(x=='x')
				sum=a*c*e;
			else
				sum=a/c*e;

		}else if(y=='%'){
			if(x=='+'){
				sum=c/e;
				sum=a+sum;
			}
			else if(x=='-'){
				sum=c/e;
				sum=a-sum;
			}
			else if(x=='x')
				sum=a*c/e;
			else
				sum=a/c/e;


		}else if(y=='+'){
			if(x=='+')
				sum=a+c+e;
			else if(x=='-')
				sum=a-c+e;
			else if(x=='x')
				sum=a*c+e;
			else
				sum=a/c+e;

		}else if(y=='-'){
			if(x=='+')
				sum=a+c-e;
			else if(x=='-')
				sum=a-c-e;
			else if(x=='x')
				sum=a*c-e;
			else
				sum=a/c-e;
		}
	//答案不能出现负数
		if(sum<0)
			sum=0;
	//输出式子以及结果
		printf("第%d题：",i+1);
        printf("%d %c %d %c %d=%d\n\n",a,x,c,y,e,sum);
    }
}
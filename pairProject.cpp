#include<stdio.h>
#include<stdlib.h>
#define N 30

void main(){
    int i;
    printf("�������%d�����������Լ������\n",N);
//ѭ������
	for(i=0;i<N;i++){
		int a=rand()%10+1,c=rand()%10+1,e=rand()%10+1;
		int b=rand()%4+1,d=rand()%4+1;
		int sum=0;    //�洢���
		char x,y;    //�������
	//��һ�������������
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
	//�ڶ��������������
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
	//������������ж�����˳���ȳ˳���Ӽ���
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
	//�𰸲��ܳ��ָ���
		if(sum<0)
			sum=0;
	//���ʽ���Լ����
		printf("��%d�⣺",i+1);
        printf("%d %c %d %c %d=%d\n\n",a,x,c,y,e,sum);
    }
}
#include<stdio.h>
#include<stdlib.h>
#define N 5

void main(){
    int i,j;
    int a=radom()%100+1,c=radom()%100+1，e=radom()%100+1;
	int b=radom()%4+1,d=radom()%4+1;
    char m[]={'+','-','x','%'};

    printf("随机生成%d个四则运算题目：\n",&N);
    for(i=0;i<N;i++){
        a=n[i]; b=n[i+2];   c=m[i%4];
        printf("%d %c %d\n",a,c,b);
    }
}
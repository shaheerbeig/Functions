#include<stdio.h>
int sum(int , int);
int diff(int , int);
int mult(int , int);
int div(int , int);
int a , b , result ;
char operand;
int main(){
	printf("\n enter the first value: \n ");
	scanf("%d",&a);
	printf("\n enter the second value: \n ");
	scanf("%d",&b);
	fflush(stdin);
	printf("\n enter the operand\n");
	scanf("%c",&operand);
	switch(operand){
		case '+' :
			result=sum(a,b);
			break;
		case '-' :
			result=diff(a,b);
			break;
		case '*' :
			result=mult(a,b);
			break;
		case '/' :
			result=div(a,b);
			break;
	}
	printf("%d",result);
}
	int sum(int a , int b){
		return a+b;
	}
	int diff(int a , int b){
		return a-b;
	}
	int mult(int a , int b){
		return a*b;
	}
	int div(int a , int b){
		return a/b;
	}
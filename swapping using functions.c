#include<stdio.h>
int swap(int , int );
int n1 , n2 ;
int main(){
	printf("\n enter the value of first variable: ");
	scanf("%d",&n1);
	printf("\n enter the second value of the varibale: ");
	scanf("%d",&n2);
	swap(n1, n2);
}
int swap(a ,b){
	int temp = b;
	b=a;
	a=temp;
	printf("\n swapped value are %d %d", a, b);
}	     	
	
       
#include<stdio.h>
int sum(int , int);
int main(){
	int c , v1 , v2 ,x , y ;
	printf("enter the value 1");
	scanf("%d",&v1);
	printf("\n enter the second value\n");
	scanf("%d",&v2);
	c=sum(v1,v2);
	printf(" \n sum is %d",c);
	}
	int sum(v1,v2){
		return v1 + v2;
	}
	

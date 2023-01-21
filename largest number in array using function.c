#include<stdio.h>
int largest(int);
int a[10];
int max , i , num;
int main(){
	
	printf("enter the number of elements in the array\n");
	scanf("%d",&num);
	
	printf("\n enter the elements in the array\n");
	for(i=1;i<=num;i++){
		scanf("%d",&a[i]);
	}
	printf("the largest element in the array is %d",largest(max));
}
	
	int largest(int max){
		max=0;
		for(i=1;i<=num;i++){
			if(a[i]>max){
			max=a[i];	
			}
		}
		return max;
	}
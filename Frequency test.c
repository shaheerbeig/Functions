#include<stdio.h>
	int arr[10];
	int fre[10];
	int n , i , j , m , count;
	void frequency(int);
	
	int main(){
		printf("\n enter the number of elemenyts in the array\n");
		scanf("%d",&n);
		printf("\n enter the elements in the array\n");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
			fre[i]=-1;
		}
		frequency(m);
    }

	void frequency(int m){
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				fre[j]=0;
			}
		}
		if(fre[i]!=0){
			fre[i]=count;
		}
	}	
	for(i=0;i<n;i++){
		if(fre[i]!=0){
			printf("\n the frequency of %d is %d times \n ",arr[i],fre[i]);
		}
	}
}
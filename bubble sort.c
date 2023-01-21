#include<stdio.h>
void bubblesort(int arr[] , int n);
int arr[10];
int n , temp , i , j;;
	int main(){	
		bubblesort(arr , n);
	}
	
	void bubblesort(int arr[] , int n){
		printf("\n enter the number of elements in the array\n");
		scanf("%d",&n);
		printf("\n enter the elements in the array \n");
			for(i=0;i<n;i++){
			 	scanf("%d",&arr[i]);
			}
		for(i=0;i<n;i++){
			for(j=0;j<n-1;j++){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			printf(" %d ",arr[i]);
		}
	}
	
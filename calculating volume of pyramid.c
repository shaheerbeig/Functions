#include<stdio.h>
float getData(int a, int h);
float VolCalc(int a, int h);
float volume , V;
int a , h ;
int main(){
		printf("the volume is %.2f \n ",getData(a,h));
		
	}
	float getData(int a , int b){
		printf("\n enter the width of the base \n");
		scanf("%d",&a);
		printf("\n enter the height of the pyramid \n");
		scanf("%d",&h);
		VolCalc(a,h);
	}
	
	float VolCalc( a,  h){
		volume=(a*a)*(h/3.00);
		return volume;
	}
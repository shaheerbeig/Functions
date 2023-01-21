#include<stdio.h>
#include<string.h>
char name[50];
char course[50];
int fre[50]={-1};
int num , length , i , j , found , max=0 ; 
char value;

	int main(){
		printf("\n ENTER YOUR NAME \n");
		gets(name);
		printf("\n ENTER THE COURSES \n");
		gets(course);    	
    	strcat(name,course);
    	length=strlen(name);

    	
    	for(i=0;i<length;i++){
    		found=1;
    		for(j=i+1;j<length;j++){
    			if(name[i]==name[j]){
    				found++;
    				fre[i]=found;
				}
			}
			if(fre[i]!=0){
				fre[i]=found;
			}
		}
	
		for(i=0;i<length;i++){
			if(fre[i]>max){		
				 max=fre[i];
   				value = name[i];

			}
		}
		printf("HIGHEST VALUE %c OCCURS %d TIMES",value,max);
		return 0;
	}
#include<stdio.h>

 int main(){
 	int a;
 	
 	printf("enter value: ");
 	scanf("%d",&a);
 	
 	if(a==0){
 		printf("Neutral");
	 }
	 
	 else if(a>0){
	 	printf("Positive");
	 }
	 
	 else{
	 	printf("Negative");
	 }
	 return 0;
 }

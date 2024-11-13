#include<stdio.h>

int main(){
	int a;
	printf("Enter year:",a);
	scanf("%d", &y);
	
	if ((a%4==0 && a%100!=0) || (a%400==0)){
		printf("leap year");
	}else{
		printf("Not a leap year");
	}
	
	return 0;
}




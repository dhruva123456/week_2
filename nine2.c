#include<stdio.h>
int main(){
	int year,month,days;
	printf("Enter the year:",year);
	scanf("%d",&year);
	printf("Enter the month:",month);
	scanf("%d",&month);
	if(month==2){
		if((year%4==0&&year%100!=0) || year%400==0){
			days = 29;
		}else{
			days=28;
		}
	}else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		days = 31;
	}else{
		days = 30;
	}
	printf("Number of days are %d",days);	
	return 0;
}

 #include<stdio.h>
int main(){
	int d,m,y;
	printf("Enter the date:",d);
	scanf("%d",&d);
	printf("Enter the month:",m);
	scanf("%d",&m);
	printf("Enter the year:",y);
	scanf("%d",&y);
	
	if(d<0|| m<0 || y<0 || m>12 ||d>31){
		printf("invalid input");
	}
	else{
		if((m==1||m==3||m==5||m==7||m==8||m==10)&&d==31) {
			d=1;
			m=m+1;
			printf("next date is %d %d %d",d,m,y);
		}else if((m==4||m==6||m==9||m==11)&&d==30){
			d=1;
			m=m+1;
			printf("next date is %d %d %d",d,m,y);
		}else if(m==12&&d==31){
			d=1;
			m=1;
			printf("next date is %d %d %d",d,m,y);
		}else if((((y%4==0&& y%100!=0)||y%5==0)&&d==29)&&m==2){
			d=1;
			m=3;
			printf("next date is %d %d %d",d,m,y);
		}else if((!((y%4==0&&y%100!=0)||y%400==0)&&d==28 && m==2)) {
			d=1;
			m=3;
			printf("next date is %d %d %d",d,m,y);
		}else{
			if((m==4||m==6||m==9||m==11)&&d==31||((((y%4==0&&y%100!=0)||y%400==0)&&d>29)&&m==2)||((!((y%4==0&&y%100!=0)||y%400==0)&&d>29&&m==2))){
				printf("invalid");
		
			}else{
				d=d+1;
				printf("next date is %d %d %d",d,m,y);
			}
		}
    } 
    return 0;
	}
	


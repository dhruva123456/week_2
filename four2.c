#include<stdio.h>

int main(){
	int a;
	printf("Enter basic salary:");
	scanf("%d",&a);
	if(a<10000){
		printf("Total salary is %f\n da=%f\n hra=%f",(float)a*(1+15/100+20/100),(float)(a*15/100),(float)(a*20/100));
	}else{
		printf("Total salary is %f\n da=%f\n hra=%f",(float)a*(1+20/100+25/100),(float)(a*20/100),(float)(a*25/100));
	}
	return 0;
}

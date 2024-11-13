#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter 3 values:");
	scanf("%d",&a,&b,&c);
	if(a>=b && a>=c){
		printf("%d is the greatest",a);
	} else if(a<=b && b>=c){
		printf("%d is the greatest",b);
	}else{
		printf("%d is the greatest",c);
	}
	return 0;
}

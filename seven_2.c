#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==b){
		printf("equilateral");
	}else if((a==b&&a!=c) || (a==c&&a!=b) || (b==c&&b!=a)){
		printf("isosceles");
	}else{
		printf("scalene");
	}
	
	
	return 0;
}

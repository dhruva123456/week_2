#include<stdio.h>

int main(){
	int u,s;
	printf("Enter units, surcharge");
	scanf("%d %d", &u,&s);	
	if(u<100){
		printf("Total bill is %d",u*3+s);
	}
	printf("Total bill is %d",u*5+s);
	return 0;
}

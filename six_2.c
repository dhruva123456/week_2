#include<stdio.h>

int main(){
	int s1,s2,s3,s4,s5;
	float t;
	printf("Physics:",s1);
	scanf("%d", &s1);
	printf("Mathematics:",s2);
	scanf("%d", &s2);
	printf("Chemistry:",s3);
	scanf("%d", &s3);
	printf("Biology:",s4);
	scanf("%d", &s4);
	printf("Computer:",s5);
	scanf("%d", &s5);
	
	printf("Percentage is %f%%\n", t=(s1+s2+s3+s4+s5)/5);
	
	if(t>=90){
		printf("Grade A");
	}else if(t>=80 && t<90){
		printf("Grade B");
	}else if(t>=70 && t<80){
		printf("Grade C");
	}else if(t>=60 && t<70){
		printf("Grade D");
	}else if(t>=40 && t<60){
		printf("Grade E");
	}else{
		printf("Grade F");
	}
	return 0;
}

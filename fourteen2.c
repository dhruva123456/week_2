#include<stdio.h>
int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("Lower case");
    }else{
        printf("Upper case");
    }
    return 0;
}
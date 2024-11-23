#include<stdio.h>
int main(){
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    if(c=='a'||c=='a'||c=='i'||c=='e'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}
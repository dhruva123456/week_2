#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("%d",a);
    else if((b>c)&&(b>a))
    printf("%d",b);
    else if((c>b)&&(a<c))
    printf("%d",c);
    else if(a==b && a==c)
    printf("%d",a);
    else if(a==b && a>c)
    printf("%d",a);
    else if(a==c && b>a)
    printf("%d",a);
    else if(b==c && b>a)
    printf("%d",b);
    else if(a==b && a<c)
    printf("%d",c);
    else if(a==c && a<b)
    printf("%d",b);
    else
    printf("%d",a);

}
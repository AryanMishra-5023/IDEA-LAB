#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a>b && b>c){
        printf("%d is greater number",a);
    }
    else{
        if(b>a && a>c){
            printf("%d is greater number",b);
            
        }
        else{
            printf("%d is greater number",c);
        }
    }
    return 0;
}

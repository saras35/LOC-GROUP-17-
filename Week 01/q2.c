#include<stdio.h>
int main()
{
    int a;
    printf("enter the number you want to check=");
    scanf("%d",&a);
    if(a>0)
    printf("the number you have entered is POSITIVE");
    else if(a<0)
    printf("the number you have entered is NEGATIVE");
    else
    printf("the number you have entered is ZERO");
    return 0;
}
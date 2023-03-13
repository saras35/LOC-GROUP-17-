#include<stdio.h>
int main()
{
    float a,b,add,sub,mul,div;
    int c;
    printf("enter two numbers you want to calculate=");
    scanf("%d %d",&a,&b);
    printf("ENTER '1' FOR ADDITION\nENTER '2' FOR SUBTRACTION\nENTER '3' FOR MULTIPLICATION\nENTER '4' FOR DIVISION\nCHOOSE THE OPERATION YOU WANT TO DO= ");
    scanf("%d",&c);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    switch(c)
    {
    case 1:
    printf("ANSWER=%.2f",add);
    break;
    case 2:
    printf("ANSWER=%.2f",sub);
    break;
    case 3:
    printf("ANSWER=%.2f",mul);
    break;
    case 4:
    printf("ANSWER=%.2f",div);
    break;
    }
    
return 0;


}
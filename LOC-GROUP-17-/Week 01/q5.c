#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("enter the radius of the circle in cm =");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("the diameter of the circle of radius %.2fcm= %.2fcm\n",r,d);
    printf("the circumference of the circle of radius %.2fcm= %.2fcm\n",r,c);
    printf("the area of the circle of radius %.2fcm= %.2fcm",r,a);
    return 0;

}
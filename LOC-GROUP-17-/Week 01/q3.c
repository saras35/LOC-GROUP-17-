
#include<stdio.h>
int main()
    {
      int a,n,r=0;
      printf("enter the number=");
      scanf("%d",&a);
      do
      {
        n=a%10;
      r=r+n;
      a=a/10;
      }while(a>0);
      printf("tne addition of the number you have entered=%d",r);
      return 0;
    }
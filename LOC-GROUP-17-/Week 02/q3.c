#include <stdio.h>
#include <conio.h>
int sort(int n); 
int main()
{
    int n;  
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    sort(n);
    return 0;
}
int sort(int n){
	int a[1000],i,j,temp;
	printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }   
    for(i=0; i<n-1; i++)
    {         
        for(j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
           	temp=a[j];
           	a[j]=a[j+1];
           	a[j+1]=temp;
		   }
        }      
    }
    printf("\narray elements in ascending order:\n ");
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
 }
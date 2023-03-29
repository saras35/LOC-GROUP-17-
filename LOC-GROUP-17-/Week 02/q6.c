#include<stdio.h>
int MaxRepeatingElement(int arr[],int n);
int main()
{
    int i,n;              
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int array[n];      
    printf("Enter the array elements");
    for(i=0;i<n;i++)   
    {
        scanf("%d",&array[i]);
    } 
    int maxElement = MaxRepeatingElement(array, n);    
    printf("\n Maximum Repeating Element : %d",maxElement);   
    return 0;
}
int MaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
    int maxCount = 0;
    for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++;     
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}
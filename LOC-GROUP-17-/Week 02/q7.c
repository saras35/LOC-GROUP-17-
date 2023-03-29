#include <stdio.h>  
int main()  
{  
    int n, i, j=0,temp;  
    printf("Enter the size of the Array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    for(i = 0; i < n; i++)  
    {  
        if(arr[i] < 0)  
        {  
            if(i != j)  
            {  
                temp = arr[i];  
                arr[i] = arr[j];  
                arr[j] = temp;  
            }  
            j++;  
        }  
    }  
    printf("The resultant Array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
    return 0; 
}  
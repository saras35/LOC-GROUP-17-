#include <stdio.h>
#include <conio.h> 
int main()
{
  
    int a[5] = { 3, 6, 9, 2, 5 }, n = 5;
    int b[n], i;
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("The first array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nThe copied array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
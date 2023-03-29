#include <stdio.h>
#include <conio.h>
int main(){
	int i,j,k=0;
	for (i=0;i<=5;i++){
		for (j=0;j<i;j++){
			k++;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
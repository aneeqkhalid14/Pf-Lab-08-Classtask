#include <stdio.h>

int main(){
	int table;
	printf("How many rows of table do u want: ");
	scanf("%d",&table);
    printf("Multiplication Table (1-%d): \n",table);
    int i, j;
    for(i=1;i<=table;i++){
    	printf("%d:    ",i);
    	int temp = 1;
    	for(j=0;j<5;j++){
		    printf("%d ",i*temp);
			temp++;	
		}
		printf("\n");
	}
}

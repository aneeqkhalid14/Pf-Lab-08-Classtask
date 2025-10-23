#include <stdio.h>

int main(){

	char array[5][6] = {};
	int data, student = 0, missing = 0;
	
	int i,j;

    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if((i+j)%2 ==0){
    			array[i][j] = 'x';
    			student++;
			}
			else{
				array[i][j] = 'o';
				missing++;
			}
		}
	}
	printf("\n");
	printf("Classroom Seating Chart:\n");
	printf("===========================\n");
	printf("===========================\n");
	printf("(x = student, o =  empty)\n");
	for(i=0;i<5;i++){
		printf("Row%d ",i);
		for(j=0;j<6;j++){
			printf("%c ", array[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Summary: \n");
	printf("Student seated: %d\n", student);
	printf("Empty desk: %d\n", missing);
	printf("Total desk: 25");
	
	
}

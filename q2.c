#include <stdio.h>

int main(){
	int array[3][3] = {{12,34,56},{72,4,6},{90,67,12}};
	int i,j,max=0, index_row = 0, index_col = 0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(array[i][j]> max){
				max = array[i][j];
				index_row = i;
				index_col = j; 
			}			
	    }
	}
	printf("The maximum number is %d and is located on row %d and column %d", max,index_row,index_col);
}

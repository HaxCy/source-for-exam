#include <stdio.h>
#define MAX 100

void import_matrix(int matrix[][MAX], int line, int column){
	for(int i=0; i<line*column; i++){
		printf("Matrix[%d][%d]: ", i/line, i%line);
		scanf("%d", &matrix[i/line][i%line]);
	}
}
void printf_matrix(int matrix[][MAX], int line, int column){
	for(int i=0; i<line*column; i++){
		if(i%line==0){
			printf("\n");
		}
		printf("\t%d", matrix[i/line][i%line]);
	}
}
void conv_sta2end(int matrix[][MAX], int line, int column){
	for(int i=0; i<column; i++){
		int temp=matrix[0][i];
		matrix[0][i]=matrix[line-1][i];
		matrix[line-1][i]=temp;
	}
}
int main(){
	int matrix[MAX][MAX], line, column;
	printf("Nhap so dong va cot: ");
	scanf("%d%d", &line, &column);
	import_matrix(matrix, line, column);
	conv_sta2end(matrix, line, column);
	printf_matrix(matrix, line,column);
	return 0;
}

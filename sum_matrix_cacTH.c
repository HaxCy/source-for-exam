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

//tinh tong mang
void sum_matrix(int matrix[][MAX], int line, int column){
	int sum=0;
	for(int i=0; i<line*column; i++){
		sum+=matrix[i/line][i%line];
	}
	printf("\nTong cac phan tu trong mang la: %d ", sum);
}

//tinh tonng ma tran voi cot nhap vao
void sum_column(int matrix[][MAX], int line, int column){
	int x, sum=0;
	do{
		printf("\nNhap vao so cot (0<=x<%d)ban muon tinh tong: ", column);
		scanf("%d", &x);
	}while(x<0 || x>=column);
	for(int i=0; i<line; i++){
		sum+=matrix[i][x];
	}
	printf("\nTong cua dong %d la: %d", x, sum);
}
//tinh tonng ma tran voi dong nhap vao
void sum_line(int matrix[][MAX], int line, int column){
	int x, sum=0;
	do{
		printf("\nNhap vao so cot (0<=x<%d)ban muon tinh tong: ", line);
		scanf("%d", &x);
	}while(x<0 || x>=line);
	for(int i=0; i<column; i++){
		sum+=matrix[x][i];
	}
	printf("\nTong cua dong %d la: %d", x, sum);
}

//tinh tong duong cheo chinh va phu
void sum_cheo(int matrix[][MAX], int line){
	int sum=0;
	for(int i=0; i<line; i++){
		sum+=matrix[i][i];
	}
	printf("\nTong duong cheo chinh la: %d", sum);
	
	
	sum=0;
	for(int i=0; i<line; i++){
		sum+=matrix[line-i-1][i];
	}
	printf("\nTong duong cheo phu la: %d", sum);
}

//tinh tong tam giac tren va duoi neu do la ma tran vuong
void sum_triangle_updow(int matrix[][MAX], int line){
	int sum=0;
	for(int i=1; i<line; i++){
		for(int j=0; j<i; j++){
			sum+=matrix[i][j];
		}
	}
	printf("\nTong tam giac duoi la: %d", sum);
	sum=0;
	for(int i=0; i<line; i++){
		for(int j=i+1; j<line; j++){
			sum+=matrix[i][j];
		}
	}
	printf("\nTong tam giac tren la: %d", sum);
}
int main(){
	int matrix[MAX][MAX], line, column;
	printf("Nhap so dong va cot: ");
	scanf("%d%d", &line, &column);
	import_matrix(matrix, line, column);
	printf_matrix(matrix, line, column);
	sum_matrix(matrix, line, column);
	sum_column(matrix, line, column);
	sum_line(matrix, line, column);
	
	if(line==column){
		sum_cheo(matrix, line);
		sum_triangle_updow(matrix, line);
	}
	
	return 0;
}

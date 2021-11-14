void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

//sap xep tang
void sapxep1(int matrix[][MAX], int line, int col){
	for(int i=0; i<line*col; i++){
		for(int j=i+1; j<line*col; j++){
			if(matrix[i/col][i%col]<matrix[j/col][j%col]){
				swap(&matrix[i/col][i%col], &matrix[j/col][j%col])
			}
		}
	}
}
//sap xep giam
void sapxep1(int matrix[][MAX], int line, int col){
	for(int i=0; i<line*col; i++){
		for(int j=i+1; j<line*col; j++){
			if(matrix[i/col][i%col]>matrix[j/col][j%col]){
				swap(&matrix[i/col][i%col], &matrix[j/col][j%col])
			}
		}
	}
}

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

//sap xep tang
void sapxep(int *arr, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				swap(arr+i, arr+j);
			}
		}
	}
}

//sap xep giam
void sapxep2(*arr, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]<arr[j]){
				swap(arr+i, arr+j);
			}
		}
	}
}

void XoaPhanTu(int a[], int *n, int pos){
    for(int i=pos; i<*n-1; i++){
        a[i]=a[i+1];
    }
    *n-=1;
}
void themphantu(int *a, int *n, int phantuthem, int pos){
    *n+=1;
    for(int i=*n-1; i>pos; i--){
        a[i]=a[i-1];
    }
    a[pos]=phantuthem;
}

//luc gôi ham o ham main thi: 
themphantu(a, &n, phantuthem, pos);

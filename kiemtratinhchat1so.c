#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void doixung(int n){
	int rev_number=n%10, z=n;
	n/=10;
	if(z<10){
		goto temp;
	}
	while(n>0){
		rev_number=(rev_number*10)+n%10;
		n/=10;
	}
	if(rev_number==z){
		temp: printf("so n la so doi xung");
	}else{
		printf("So n khong phai la so doi xung");
	}
}

void sochinhphuong(int n){
	if(sqrt(n)==(float)sqrt(n))
		printf("\nso n la so chinh phuong");
	else
		printf("\nso n khong la so chinh phuong");
}

void songuyento(int n){
	if(n<2) goto jump1;
	if(n%2 == 0) goto jump1;
	if(n==2){
		jump: printf("\nn la so nguyen to");
		return;
	}
	for(int i=3; i<sqrt(n); i+=2){
		if(n%i==0)
	goto 
			goto jump1;
	}jump;
	jump1: printf("\nn khong phai so nguyen to");
}

void chusonhovalon(int n){
	if(n<10){
		printf("\nChu so lon nhat = chu so nho nhat = %d", n);
		return;
	}
	int min=n%10, max=n%10;
	n/=10;
	while(n>0){
		int x=n%10;
		n/=10;
		if(max<x){
			max=x;
		}
		if(min>x){
			min=x;
		}
	}
	printf("\nChu so lon nhat la: %d\nChu so nho nhat la: %d", max, min);
}
void kiemtraso(int n){
	if(n<10){
		printf("\nSo n khong tang khong giam");
		return;
	}
	int x=n%10;
	n/=10;
	if(x>n%10)
		goto kiemtratang;
	else
		goto kiemtragiam;

	kiemtratang:
	while(n>0){
		if(x>n%10){
			x=n%10;
			n/=10;
		}else{
			thoat: printf("\nso n vua tang vua giam\n");
			return;
		}
	}
	printf("\nn la 1 co cac chu so tang\n");
	return;

	kiemtragiam:
	while(n>0){
		if(x<n%10){
			x=n%10;
			n/=10;
		}else{
			goto thoat;
		}
	}
	printf("\nn la 1 so co cac chu so giam dan\n");
}
int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);

	doixung(n);
	sochinhphuong(n);
	songuyento(n);
	chusonhovalon(n);
	kiemtraso(n);
	printf("\n");

	return 0;
}

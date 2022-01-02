#include<stdio.h>

/*
	- them phan tu:
		+) thay doi so luong phan tu trong mang: tang len 1 hoac nhieu
	- Them vao cuoi mang:
		+) a[n] = giaTri;

*/

int main() {
	int a[100] = {3, 1, 6, 8, 9};
	int i, n = 5;
	
	printf("Mang ban dau la: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
//	int k = 10;
	//them k vào vao cuoi mang a
//	int b;
//	scanf("%d", &b);
//	a[n] = b;
//	a[n] = k;
//	n++; //= 6

//	int k = 10;
	//Them k vao dau mang
//	a[0] = k;
	//lui tat ca phan tu ve sau 1 vi tri
//	for(i=n; i>0; i--) {
//		a[i] = a[i-1];
//	}
//	a[0] = k;
//	n++;


	int k = 10;
	int pos = 3;
	//Them k vao vi tri bat ki
	for(i=n; i>pos-1; i--) {
		a[i] = a[i-1];
	}
			
	a[pos-1] = 10;	
	n++;	

	printf("\nMang sau khi chen vao sau cung: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}

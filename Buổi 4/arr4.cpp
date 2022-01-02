#include<stdio.h>

int main() {
	int a[100] = {3, 1, 6, 8, 9};
	int i, n = 5;
	
	printf("Mang ban dau la: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	//xóa vi tri cuoi cung: n--;
//	n--;

	//xóa vi tri dau tien
//	n--;
//	for(i=0; i<n; i++) {
//		a[i] = a[i+1];
//	}


	//xóa v? tri bat ki: khoi tao i = index cua phan tu can xoa
	int pos = 3;
	n--;
	for(i=pos-1; i<n; i++) {
		a[i] = a[i+1];
	}
	
	
	printf("\nMang sau khi xoa: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}

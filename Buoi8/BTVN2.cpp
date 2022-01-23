#include<iostream>

//xuat mang
void Output(int a[], int n) {
	for(int i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

//kiem tra so nguyen to
int IsPrime(int n) {
	for(int i=2; i*i<=n; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	
	return n > 1;
}

//chen 1 phan tu bat ki vao 1 vi tri bat ki
void InsertEle(int a[], int &n, int val, int pos) { //
	for(int i=n; i>=pos; i--) {
		a[i] = a[i-1];
	}
	a[pos-1] = val;
	n++;
}

//chen vao sau phan tu < 10 va la snt
void Insert(int a[], int &n, int x) {
	for(int i=0; i<n; i++) {
		if(a[i] < 10 && IsPrime(a[i]) == 1) {
			InsertEle(a, n, x, i+2);
			i++; //luu y
		}
	}
//	1, 2, 4, 3 i=0
//	1, 2, 7, 4, 3		i=1+1=2
//	1, 2, 		i=3
}

//xoa 1 phan tu tai vi tri bat ki
void DeleteEle(int a[], int &n, int pos) { //
	for(int i=pos-1; i<n-1; i++) {
		a[i] = a[i+1];
	}
	n--;
}

//xoa tat ca phan tu chia het 3 va khong chia het 5
void Delete(int a[], int &n) {
	for(int i=0; i<n; i++) {
		if(a[i] % 3 == 0) {
			if(a[i] % 5 != 0) {
				DeleteEle(a, n, i+1);
			}
		}
	}
}

//xoa tat ca cac phan tu trung nhau
void DeleteDuplicate(int a[], int &n) {
	//Ktra phan tu tai index i voi TAT CA phan tu sau index i
	//1 2 10 4 10
	for(int i=0; i<n; i++) {
		//i=0; a[i]=1
		//i=1; a[1]=2
		//i=2; a[2]=10
		//i=3; a[3]=4
		for(int j=i+1; j<n; j++) {
			if(a[i] == a[j]) {
				DeleteEle(a, n, j+1);
			}
		}
	}
}

int main() {
	int n = 7;
	int a[100] = {1, 2, 2, 1, 5, 7, 5}; 
	int x = 10;
	
//	Insert(a, n, x);
//	Output(a, n);
	//	output
//	1 2 10 4 3 10
//	1 2 10 4 10
//	1 2 10 4
	
	
//	Delete(a, n);
//	Output(a, n);
	
	
	DeleteDuplicate(a, n);
	Output(a, n);


	

	
	return 0;
}

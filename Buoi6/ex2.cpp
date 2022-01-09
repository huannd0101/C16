#include<iostream>

using namespace std;

void ThemPhanTu2(int a[], int &n, int pos, int val) {
	for(int i=n; i>pos-1; i--) {
		a[i] = a[i-1];
	}
	a[pos-1] = val;
	n++;
}

void ThemPhanTu(int a[], int &n, int index, int val) {
	for(int i=n; i>index; i--) {
		a[i] = a[i-1];
	}
	a[index] = val;
	n++;
}

void Output(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n = 6;
//	int a[100] = {1, 4, -5, 9, -8, 7};
	int a[100] = {1, 4, 5, 9, 8, 7};
	
//	ThemPhanTu(a, n, 0, 100); //chen dau
//	ThemPhanTu(a, n, 2, 100); //chen bat ki
//	ThemPhanTu(a, n, n, 100); //chen cuoi
	bool ok = false;
	for(int i=0; i<n; i++) {
		if(a[i] < 0) {
			ThemPhanTu(a, n, i+1, 100);
			ok = true;
			break;
		}
	}
	
//	if(ok == false) {
	if(!ok) {
		ThemPhanTu(a, n, n, 100);
	}
	
	Output(a, n);
	
	return 0;
}

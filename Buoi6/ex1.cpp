#include<iostream>

using namespace std;

bool CheckNumber(int n) {
	while(n > 0) {
		int du = n % 10;
		if(du != 4 && du != 7) {
			return false;
		}
		n = n / 10;
	}
	return true;
}

void DeleteElement(int a[], int *n, int pos) {
	for(int i=pos-1; i<*n-1; i++) {
		a[i] = a[i+1];
	}
	*n = *n - 1;
}
//C++
void DeleteElement2(int a[], int &n, int pos) {
	for(int i=pos-1; i<n-1; i++) {
		a[i] = a[i+1];
	}
	n--;
}

void Output(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

void Process(int a[], int *n) {
	for(int i=0; i<*n; i++) {
		if(CheckNumber(a[i])) {
			DeleteElement(a, n, i+1);
			i--;
		}
//		while(i < n && CheckNumber(a[i])) {
//			DeleteElement(a, &n, i+1);
//			cout << n << endl;
//		}
	}
}

void SortAsc(int a[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
 	}
}

int main() {
	int n=5;
	int a[100] = {37, 2, 46, 447, 4};
	
	Process(a, &n);
	SortAsc(a, n);
	Output(a, n);
	
	return 0;
}




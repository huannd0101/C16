#include<iostream>
using namespace std;

void SortDesc(int a[], int n, int iStart, int iEnd) {
	for(int i=iStart; i<iEnd; i++) {
		for(int j=i+1; j<=iEnd; j++) {
			if(a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
 	}
}

void Output(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n = 7;
	int a[100] = {1, 9, -5, -8, 9, -8, 7 };
	
	SortDesc(a, n, 0, n-1);
	
	int iMax=1, iMin=n-2;
	int i=1;
	while(a[i] == a[0]) {
		iMax=++i;
	}
	while(a[iMin] == a[n-1]) {
		iMin--;
	}
	
	SortDesc(a, n, iMax, iMin);
	
//	for(int i=iMax; i<iMin; i++) {
//		for(int j=i+1; j<=iMin; j++) {
//			if(a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
// 	}

	Output(a, n);
	return 0;
}

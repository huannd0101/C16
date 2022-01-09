#include<iostream>
using namespace std;

bool IsPrime(int n) {
	for(int i=2; i<n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return n > 1;
//	if(n < 2) {
//		return false;
//	}
//	return true;
}

int GetSum(int n) {
	int s = 0;
	while(n > 0) {
		s = s + (n % 10);
		n = n / 10;
	}
	return s;
}

int main() {
	int n = 5;
	int a[100] = {9, 5, 15, 29, 26};

	for(int i=0; i<n; i++) {
		int s = GetSum(a[i]);
		if(IsPrime(s)) {
			a[i] = -1;
		}
	}
	
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}

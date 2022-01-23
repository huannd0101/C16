#include<iostream>
using namespace std;

/*
	math.h
	- Can bac 2: sqrt()
	- e^x: exp(x)

*/

double lt(float n, int x) {
	int mul = 1;
	for(int i=1; i<=n; i++) {
		mul *= x;
	}
	return mul;
}

float BT1(float x, int n) {
//	return giaTriBT1;
	return 111;
}

float BT2(float x, int n) {
	float res = 2022;
	float lt = 1;
	
	for(int i=1; i<=n; i++) {
		lt *= x;
		res += (lt-i) / (2*i - 1);
	}
	return res;
}

float y(float x, int n) {
	if(n % 2 == 0) {
		return BT1(x, n);
	}
	return BT2(x, n);
}

int main () {
	float x = 1.5f;
	int n = 3;
	cout << y(2*x, 3*n);
}

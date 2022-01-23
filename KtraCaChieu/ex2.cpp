#include<iostream>
using namespace std;

void Input(int a[], int &n) {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
}

void Output(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

//interchange sort
void Sort(int a[], int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

//bubble sort
void BubbleSort(int a[], int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=n-1; j>i; j--) {
			if(a[j-1] < a[j]) {
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
 		}
	}
}

bool CheckSHH(int n) {
	int s=0;
	for(int i=1; i<n; i++) {
		if(n % i == 0) {
			s += i;
		}
	}
	return s == n;
//	if(s == n) {
//		return true;
//	}
//	return false;
}

void Insert(int a[], int &n, int pos, int val) {
	for(int i=n; i>=pos; i--) {
		a[i] = a[i-1];
	}
	a[pos-1] = val;
	n++;
}

void Delete(int a[], int &n, int pos) {
	for(int i=pos-1; i<n-1; i++) {
		a[i] = a[i+1];
	}
	n--;
}

void YB(int a[], int &n) {
	int x, ok=0;
	cin >> x;
	for(int i=0; i<n; i++) {
		if(CheckSHH(a[i])) {
			ok=1;
			Insert(a, n, i+1, x);
			i++; //nhay qua so vua ktra
		}
	}
	if(ok==0){
		Insert(a, n, n, x);
	}
}

void YC(int a[], int &n) {
	for(int i=0; i<n; i++) {
		if(a[i] % 2 != 0 && a[i] < 0) {
			Delete(a, n, i+1);
			i--;
		}
	}
}

void YD(int a[], int n) {
	int s, temp=0, cnt=0; 
	cin >> s;
	//Sap xep giam dan
	Sort(a, n);
	
	for(int i=n-1; i>=0; i--) { //duyet tu be den lon
		if(temp + a[i] < s) {
			temp += a[i];
			cnt++;
		} else {
			break;
		}
	}
	
	cout << cnt;
}

int main() {
	int a[100], n;
	
	Input(a, n);
	
	Sort(a, n);
	Output(a, n);
	
	YB(a, n);
	Output(a, n);
	
	YC(a, n);
	Output(a, n);
	
	YD(a, n);
	
	return 0;
}
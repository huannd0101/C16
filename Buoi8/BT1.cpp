#include<iostream>

float BieuThuc1(float x, int n) {
	float l = 2021;
	int gt = 1;
	float lt = 1;
	
	for(int i=1; i<=n; i++) {
		//i=1
		gt*=i; //1*1=1;
		lt*=x; //lt=x
		l += (lt + 2*i) / gt; //(x+2)/1
//		//i=2
//		gt*=i; //1*1*2=2;
//		lt*=x; //lt=x*x=x^2
//		l += (lt + 2*i) / gt; //(x^2+4)/2
//		
//		//i=3
//		gt*=i; //1*1*2*3=6;
//		lt*=x; //lt=x*x=x^2*x = x^3
//		l += (lt + 2*i) / gt; //(x^3+6)/6
//		
//		//i=n
//		gt*=i; //1*1*2*3*...*n=gt(n);
//		lt*=x; //lt=x*x=x^2*x*..x = x^n
//		l += (lt + 2*i) / gt; 
//		//(x^n + 2*n) / gt(n)
	}
	
	return l;
}

float BieuThuc2(float x, int n) {
	float l = 2022;
	int s = 0;
	float lt = 1;
	
	for(int i=1; i<=n; i++) {
		s+=i; //0+1=1;
		lt*=x; //lt=x
		l += (lt + 2*i) / s; //(x+2)/1
	}
	
	return l;
}


float TinhBieuThuc(float x, int n) {
	if(n % 2 == 0) {
		return BieuThuc1(x, n);
	}
	return BieuThuc2(x, n);
}

int main() {
//	float x = 4.5f;
//	int n = 4;
	
	float x = 6;
	int n = 5;
	
	printf("%.2f", TinhBieuThuc(x, n));
	
	
	return 0;
}

#include<stdio.h>

int main() {
	//-----------Bài 2
//	int i, j, cnt=0;
	
//	for(i=0; i<10; i++) { //chay 10 lan in 1 dong
//		for(j=0; j<10; j++) { //in 1 dong
//			printf("%-3d", cnt++);
//		}
//		printf("\n");
//	}	
	
//	for(i=0; i<100; i++) {
//		printf("%-3d", i);
//		if(i % 10 == 9) {
//			printf("\n");
//		}
//	}
	
	//-----------Bài 5 n >=0 và n<=100
	//A = 0 + 1 + 2 + 3 + … + n; 
	//B = 1 + 2 + 4 + 6 +… + 2*n; 
	//C = 1 + 3 + 5 + … + (2*n + 1); 
	int i, n=0;
	int A=0, B=0, C=0;
	
	for(i=0; i<=n; i++) {
		A += i;
		B += 2*i;
		C += 2*i + 1;
	}
	if(n != 0) {
		B++;
	}
	printf("A = %d\n", A);
	printf("B = %d\n", B);
	printf("C = %d\n", C);
//	int B=0;
//	int n, i;
//	//b
//	printf("Nhap n = ");
//	do {
//		scanf("%d", &n);
//		if(n < 0 || n > 100) {
//			printf("Nhap lai n = ");
//		}
//	} while(n < 0 || n > 100);
//	
//	if(n != 0) {
//		for(i=1; i<=n; i++) {
//			B += 2*i;
//		}
//		B++;
//	}
//	
//	printf("B = %d\n", B);
//	
//	//c
//	int C=0;
//	for(i=0; i<=n; i++){
//		C += 2*i + 1;
//	}
//	printf("C = %d\n", C);
//	
	
	
	
	return 0;
}

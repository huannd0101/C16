#include<stdio.h>


//comment: giu ctrl + ? (/)
int main() {
	int a[100] = {1, 2, 3, 4, 5};
	int i, n = 5;
	
	printf("Mang ban dau la: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
//	a[1] = 10;
	
	for(i=0; i<n; i++) {
		if(a[i] % 2 != 0) {
			a[i] = 10;
		}
	}
	
	printf("\nMang sau khi sua: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	

//	int b = 10;
//	printf("b = %d\n", b);
//	
//	b = 5;
//	printf("b = %d", b);
	
	return 0;
}

























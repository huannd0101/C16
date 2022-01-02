#include<stdio.h>

int main() {
	int a[100] = {3, 1, 6, 9, 8};
	int i,j, n = 5;
	
	printf("Mang ban dau la: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	// sap xep tang dan: 1, 3, 6, 9, 8
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
//			a[i]: là phan tu dung truoc
//			a[j]: là phan tu dung sau
			if(a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nMang sau khi sap xep: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
//	int b=5;
//	int c=7;
//	
//	int temp = b; //temp = 5
//	b = c; //b=7
//	c = temp; //c=5
	
	
	
	return 0;
}

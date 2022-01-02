#include<stdio.h>

int main() {
	/*
		1, 2, 3, 4, 5
		Kieu_Du_lieu ten_Mang[So_Luong_Phan_Tu];
		Kieu_Du_lieu ten_Mang[So_Luong_Phan_Tu] = {pt1, pt2, ...., ptn};
		a[1] = 2;
		index bat dau tu 0
		viTri = chiSo + 1
		mang la cac phan tu lien tiep nhau
		
		//duyet mang, sua, them, xoa, sap xep...
	*/
	int a[100];
	int i, n;
	
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n); //nhap so luong phan tu
	
	for(i=0; i<n; i++) {
		printf("Nhap a[%d] = ", i); //thong bao nguoi dung nhap phan tu nao
		scanf("%d", &a[i]); //nhap tung phan tu trong mang
	}
	
	printf("Mang vua nhap la: ");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]); //xuat tung phan tu trong mang
	}
	
	//Tinh tong cac phan tu trong mang:
	int tong = 0;
	for(i=0; i<n; i++) {
		tong = tong + a[i];
//		tong += a[i];
	}
	
	//Tinh tich cac phan tu trong mang:
	int tich = 1;
	for(i=0; i<n; i++) {
		tich = tich * a[i];
//		tich *= a[i];
	}
	
	printf("\nTong = %d", tong);
	printf("\nTich = %d", tich);
	
	//in tat ca so chan trong mang
	printf("\nCac so chan trong mang: ");
	for(i=0; i<n; i++) {
		if(a[i] % 2 == 0) { // so chan
			printf("%d ", a[i]);
		}
	}
	
	// ------------------

	
	
	
	
	
	return 0;
}

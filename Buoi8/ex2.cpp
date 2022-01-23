#include<iostream>
#include<string.h>
using namespace std;

int main() {
	/*
	
	*) Tai lieu tham khao: https://nguyenvanhieu.vn/cac-ham-trong-thu-vien-string-h/
	
	*) Kı tu
		- Chuyen ky tu viet hoa -> thuong:  += 32
		- Chuyen ky tu viet thuong -> hoa:  -= 32
		- Convert ky tu so -> so nguyen: -= 48
		- so sanh ky tu nhu so sanh voi so
		- ky tu viet ngoac don
	*) Xau ky tu
		- Ban chat la mang 1 chieu, cac phan tu la ky tu
		- Nhap/xuat
		+) cin >> str: nhap chuoi nhung khong co dau cach
		+) gets(str): nhap chuoi co khoang trang
			char *gets(char *s);
		+) fgets(str, 100, stdin)
			char *fgets(char *s, int n, FILE *fp);
			
		+) cout << str: xuat
		+) puts(str): xuat
		- Moi chuoi ky tu se co 1 ky tu dac biet de danh dau ket thuc chuoi: '\0'
	*/
	
	/*
	*) string.h
		- strlen(str): tinh do dai cua chuoi
		- strcpy(str1, str2): copy str2 thay the cho str1(gan gia tri cho chuoi)
		- strcat(str1, str2): noi chuoi 
		- strcmp(str1, str2): so sanh 2 chuoi phan biet viet hoa, viet thuong
		- strcmpi, stricmp(str1, str2): so sanh 2 chuoi khong phan biet viet hoa, viet thuong
		- i: ignore
		- strlwr(str): chuyen tat ca cac ky tu sang chu viet thuong
		- strupr(str): chuyen tat ca cac ky tu sang chu viet hoa
		
	*) kı hieu cua he thong: 
		- const char *_Str: chuoi truyen vao
	
	*/
	
	char str[100], str2[100];
//	cin >> str;
	
//	gets(str);

//	fgets(str, 5, stdin);

//	strcpy(str, "Huan");
//	strcpy(str2, "huan");
//	
////	strcat(str, "Huan");
//	int res = strcmpi(str, str2);
//	if(res == 0) {
//		cout << "2 chuoi giong nhau";
//	} else if(res < 0) {
//		cout << "Chuoi 1 < chuoi 2";
//	} else {
//		cout << "Chuoi 1 > chuoi 2";
//	}


//	strcpy(str, "HuAn");
//	strlwr(str);
//	strupr(str);
//	cout << str;

//	cout << str;
//	puts(str);
	
	
	
//	char c = 'a';
//	
//	if(c >= '0' && c <= '9') {
//		cout << "C la ky tu so";
//	}
	
//	cout << c;

	strcpy(str, "HuAn");

    for(int i=0; i<strlen(str); i++) {
    	cout << str[i] << " ";
	}
	
	for(int i=2; i<strlen(str)-1; i++) {
		str[i] = str[i+1];
	}
	
	str[strlen(str)-1] = '\0'; //n--
	
	//Hun
	
	for(int i=strlen(str); i>2; i--) {
		str[i] = str[i-1];
	}
	
	str[2] = 'a';
//	str[strlen(str)] = '\0';
	
	cout << endl << str;
}

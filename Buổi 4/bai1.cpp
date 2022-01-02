#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Media {
private:
    int maPhuongTien;
    int namXB;
    int giaBan;
public:
    Media() {
        maPhuongTien = namXB = giaBan = 0;
    }
    Media(int ma, int nam, int gia) {
        maPhuongTien = ma;
        namXB = nam;
        giaBan = gia;
    }

    void setMaPhuongTien(int ma) {
        this->maPhuongTien = ma;
    }
    void setNamXB(int nam) {
        this->namXB = nam;
    }
    void setGiaBan(int gia) {
        this->giaBan = gia;
    }

    int getMaPhuongTien() {
        return this->maPhuongTien;
    }
    int getNamXB() { 
        return this->namXB;
    }
    int getGiaBan() {
        return this->giaBan;
    }

    void Nhap() {
        cout << "Nhap ma phuong tien: ";
        cin >> this->maPhuongTien;
        cout << "Nhap nam xuat ban: ";
        cin >> this->namXB;
        cout << "Nhap gia ban: ";
        cin >> this->giaBan;
    }

    void Xuat() {
        cout << left << setw(10) << this->maPhuongTien 
            << setw(10) << this->namXB << setw(10) << this->giaBan;
    } 
};

//câu 2
class Book : public Media{
private:
    char tenSach[30];
    char tacGia[30];
    int soTrang;
public:
    Book() {
        strcpy(this->tenSach, "");
        strcpy(this->tacGia, "");
        this->soTrang = 0;
    }
    Book(int ma, int nam, int gia, char tenSach[], char tacGia[], int soTrang)
        : Media(ma, nam, gia) {
        strcpy(this->tenSach, tenSach);
        strcpy(this->tacGia, tacGia);
        this->soTrang = soTrang;
    }

    void setTenSach(char* tenSach) {
        strcpy(this->tenSach, tenSach);
    }
    void setTacGia(char* tacGia) {
        strcpy(this->tacGia, tacGia);
    }
    void setGoTrang(int soTrang) {
        this->soTrang = soTrang;
    }

    char* getTenSach() {
        return tenSach;
    }
    char* getTacGia() {
        return tacGia;
    }
    int getSoTrang() {
        return soTrang;
    }

    void Nhap() {
        Media::Nhap();
        cout << "Nhap ten sach: "; fflush(stdin);
        gets(this->tenSach);
        cout << "Nhap tac gia: "; fflush(stdin);
        gets(this->tacGia);
        cout << "Nhap so trang: ";
        cin >> this->soTrang;
    }

    void Xuat() {
        Media::Xuat();
        cout << left << setw(15) << this->tenSach << setw(15) << this->tacGia 
            << setw(15) << this->soTrang << endl;
    }

    bool operator>(Book x) {
        return this->soTrang > x.soTrang;
    }
 
};

//Câu 3
void Title() {
    cout << left << setw(10) << "Ma" 
            << setw(10) << "Nam XB" << setw(10) << "Gia ban";
    cout << left << setw(15) << "Ten sach" << setw(15) << "Tac gia" 
            << setw(15) << "So trang" << endl;
}

void SapXep(Book *books, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=n-1; j>i; j--) {
            if(books[j-1] > books[j]) {
                Book temp = books[j-1];
                books[j-1] = books[j];
                books[j] = temp;
            } 
        }
    }


    cout << "\nDanh sach sau khi sap xep\n";
    Title();
    for(int i=0; i<n; i++) {
        books[i].Xuat();
    }
}

int GetMaxGia(Book *books, int n) {
    int m = books[0].getGiaBan();
    for(int i=1; i<n; i++) {
        if(m < books[i].getGiaBan()) {
            m = books[i].getGiaBan();
        }
    }
    return m;
}

void XuatList(Book *books, int n) {
    Title();
    for(int i=0; i<n; i++) {
        books[i].Xuat();
    }
}

void HienThiGiaBanCaoNhat(Book *books, int n) {
    int m = GetMaxGia(books, n);
    cout << "\nGia ban cao nhat\n";
    for(int i=0; i<n; i++) {
        if(m == books[i].getGiaBan()) {
            books[i].Xuat();
        }
    }
}

void HienThiTongSoTrangVaTongGia(Book *books, int n) {
    int tongGia = 0;
    int tongTrang = 0;
    for(int i=0; i<n; i++) {
        tongGia += books[i].getGiaBan();
        tongTrang += books[i].getSoTrang();
    }

    cout << "\nTong so trang: " << tongTrang << endl;
    cout << "\nTong gia tri : " << tongGia << endl;
}

void Xoa(Book *&books, int &n, int pos){
    for (int i = pos-1; i<n-1; i++)
	{
        books[i] = books[i+1];
	}
    n--;
    books = (Book*)realloc(books, n * sizeof(Book));
}

void XoaBo(Book *&books, int &n) {
    char tg[1000];
    cout << "\nNhap chuoi ky tu: "; fflush(stdin);
    gets(tg);

    for(int i=0; i<n; i++) {
        if(strcmpi(books[i].getTacGia(), tg) == 0) {
            Xoa(books, n, i+1);
            i--;
        }
    }
    
    cout << "\nDanh sach sau khi xoa: " << endl;
    XuatList(books, n);
}

int main(){
    int n;
    cout << "Nhap so sach: ";
    cin >> n; 

    Book * books = new Book[n];
    for(int i=0; i<n; i++) {
        cout << "Nhap thong tin sach thu " << i + 1 << endl;
        books[i].Nhap();
    }

    //Sap xep
    SapXep(books, n);
    
    //In ra giá ban cao nhat
    HienThiGiaBanCaoNhat(books, n);

    //In ra tong so trang va tong gia tri
    HienThiTongSoTrangVaTongGia(books, n);

    //nhap chuoi va xoa
    XoaBo(books, n);

    return 0;
}
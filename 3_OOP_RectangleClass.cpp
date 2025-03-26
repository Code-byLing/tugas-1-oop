#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 3. Kelas PersegiPanjang - Menggunakan konsep Abstraksi dan Enkapsulasi
class PersegiPanjang {
private:
    double panjang; // Panjang persegi panjang
    double lebar;   // Lebar persegi panjang

public:
    // Konstruktor untuk menyetel panjang dan lebar persegi panjang
    PersegiPanjang(double panjang, double lebar) {
        this->panjang = panjang;
        this->lebar = lebar;
    }

    // Method untuk menghitung luas persegi panjang (Abstraksi)
    double hitungLuas() const {
        return panjang * lebar;
    }
};

// Fungsi utama untuk menjalankan program
int main() {
    // 3. Menggunakan kelas PersegiPanjang
    PersegiPanjang persegiPanjang(5, 10);
    cout << "Luas persegi panjang: " << persegiPanjang.hitungLuas() << endl;

    return 0;
}
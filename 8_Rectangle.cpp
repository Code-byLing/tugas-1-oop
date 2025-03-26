#include <iostream>

using namespace std;

// Fungsi untuk menghitung luas persegi panjang
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi utama untuk menjalankan program
int main() {
    double panjang = 5, lebar = 10;

    // 3. Menghitung dan menampilkan luas persegi panjang
    double luas = hitungLuasPersegiPanjang(panjang, lebar);
    cout << "Luas persegi panjang: " << luas << endl;

    return 0;
}
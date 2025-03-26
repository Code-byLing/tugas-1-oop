#include <iostream>

using namespace std;

// Fungsi untuk menambah penghitung
void tambahPenghitung(int &hitung) {
    hitung++;
}

// Fungsi utama untuk menjalankan program
int main() {
    int hitung = 0;

    // 4. Menambah penghitung dan menampilkan hasil
    tambahPenghitung(hitung);  // Menambah penghitung pertama
    tambahPenghitung(hitung);  // Menambah penghitung kedua

    cout << "Jumlah penghitung saat ini: " << hitung << endl;

    return 0;
}
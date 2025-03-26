#include <iostream>

using namespace std;

// Fungsi untuk melakukan penjumlahan
double penjumlahan(double bilangan1, double bilangan2) {
    return bilangan1 + bilangan2;
}

// Fungsi untuk melakukan pengurangan
double pengurangan(double bilangan1, double bilangan2) {
    return bilangan1 - bilangan2;
}

// Fungsi untuk melakukan perkalian
double perkalian(double bilangan1, double bilangan2) {
    return bilangan1 * bilangan2;
}

// Fungsi untuk melakukan pembagian
double pembagian(double bilangan1, double bilangan2) {
    if (bilangan2 != 0) {
        return bilangan1 / bilangan2;
    } else {
        cout << "Error! Pembagian dengan nol." << endl;
        return 0;
    }
}

// Fungsi utama untuk menjalankan program
int main() {
    double bilangan1 = 5, bilangan2 = 3;

    // 1. Menampilkan hasil operasi aritmatika
    cout << "Penjumlahan: " << penjumlahan(bilangan1, bilangan2) << endl;
    cout << "Pengurangan: " << pengurangan(bilangan1, bilangan2) << endl;
    cout << "Perkalian: " << perkalian(bilangan1, bilangan2) << endl;
    cout << "Pembagian: " << pembagian(bilangan1, bilangan2) << endl;

    return 0;
}
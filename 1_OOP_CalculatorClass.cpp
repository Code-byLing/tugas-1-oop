#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 1. Kelas Kalkulator - Menggunakan konsep Abstraksi dan Enkapsulasi
class Kalkulator {
private:
    // Tidak ada variabel yang perlu disembunyikan di sini, hanya method yang melakukan operasi
public:
    // Method untuk melakukan penjumlahan
    double penjumlahan(double bilangan1, double bilangan2) {
        return bilangan1 + bilangan2;
    }

    // Method untuk melakukan pengurangan
    double pengurangan(double bilangan1, double bilangan2) {
        return bilangan1 - bilangan2;
    }

    // Method untuk melakukan perkalian
    double perkalian(double bilangan1, double bilangan2) {
        return bilangan1 * bilangan2;
    }

    // Method untuk melakukan pembagian
    double pembagian(double bilangan1, double bilangan2) {
        if (bilangan2 != 0) {
            return bilangan1 / bilangan2;
        } else {
            cout << "Error! Pembagian dengan nol." << endl;
            return 0;
        }
    }
};

// Fungsi utama untuk menjalankan program
int main() {
    // 1. Menggunakan kelas Kalkulator
    Kalkulator kalk;
    cout << "Penjumlahan: " << kalk.penjumlahan(5, 3) << endl;
    cout << "Pengurangan: " << kalk.pengurangan(5, 3) << endl;
    cout << "Perkalian: " << kalk.perkalian(5, 3) << endl;
    cout << "Pembagian: " << kalk.pembagian(5, 3) << endl;

    return 0;
}
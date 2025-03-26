#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 4. Kelas Penghitung - Menggunakan konsep Abstraksi dan Enkapsulasi
class Penghitung {
private:
    int hitung; // Variabel untuk menyimpan nilai penghitung

public:
    // Konstruktor untuk inisialisasi nilai penghitung
    Penghitung() {
        hitung = 0;
    }

    // Method untuk menambah penghitung
    void tambah() {
        hitung++;
    }

    // Method untuk mendapatkan nilai penghitung saat ini (Abstraksi)
    int ambilHitung() const {
        return hitung;
    }
};

// Fungsi utama untuk menjalankan program
int main() {
    // 4. Menggunakan kelas Penghitung
    Penghitung penghitung;
    penghitung.tambah();  // Menambah penghitung
    penghitung.tambah();  // Menambah penghitung lagi
    cout << "Jumlah penghitung saat ini: " << penghitung.ambilHitung() << endl;

    return 0;
}
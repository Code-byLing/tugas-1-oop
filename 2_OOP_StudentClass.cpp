#include <iostream>
#include <string>

using namespace std;

// 2. Kelas Murid - Menggunakan konsep Abstraksi dan Enkapsulasi
class Murid {
private:
    string nama;        // Nama murid
    string id_murid;    // ID murid
    string nilai;       // Nilai murid

public:
    // Konstruktor untuk menyimpan informasi murid
    Murid(string nama, string id_murid, string nilai) {
        this->nama = nama;
        this->id_murid = id_murid;
        this->nilai = nilai;
    }

    // Method untuk menampilkan informasi murid (Abstraksi)
    void tampilkanInfoMurid() const {
        cout << "Nama: " << nama << ", ID: " << id_murid << ", Nilai: " << nilai << endl;
    }
};

// Fungsi utama untuk menjalankan program
int main() {
    // 2. Menggunakan kelas Murid
    Murid murid("Angling", "24120300019", "A");
    murid.tampilkanInfoMurid();

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menampilkan informasi murid
void tampilkanInfoMurid(string nama, string id_murid, string nilai) {
    cout << "Nama: " << nama << ", ID: " << id_murid << ", Nilai: " << nilai << endl;
}

// Fungsi utama untuk menjalankan program
int main() {
    string nama = "Angling";
    string id_murid = "24120300019";
    string nilai = "A";

    // 2. Menampilkan informasi murid
    tampilkanInfoMurid(nama, id_murid, nilai);

    return 0;
}
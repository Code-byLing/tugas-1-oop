#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 5. Kelas Titik - Menggunakan konsep Abstraksi dan Enkapsulasi
class Titik {
private:
    double x; // Koordinat x
    double y; // Koordinat y

public:
    // Konstruktor untuk menyetel koordinat titik
    Titik(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Method untuk menghitung jarak titik dari titik asal (0, 0) (Abstraksi)
    double jarakDariAsal() const {
        return sqrt(x * x + y * y);
    }
};

// Fungsi utama untuk menjalankan program
int main() {
    // 5. Menggunakan kelas Titik
    Titik titik(3, 4);
    cout << "Jarak dari titik asal: " << titik.jarakDariAsal() << endl;

    return 0;
}
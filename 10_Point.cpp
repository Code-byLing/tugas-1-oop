#include <iostream>
#include <cmath>

using namespace std;

// Fungsi untuk menghitung jarak titik dari titik asal (0, 0)
double hitungJarakDariAsal(double x, double y) {
    return sqrt(x * x + y * y);
}

// Fungsi utama untuk menjalankan program
int main() {
    double x = 3, y = 4;

    // 5. Menghitung dan menampilkan jarak dari titik asal
    double jarak = hitungJarakDariAsal(x, y);
    cout << "Jarak dari titik asal: " << jarak << endl;

    return 0;
}
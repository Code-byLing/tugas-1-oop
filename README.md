# README - Calculator, Student, Rectangle, Counter, Point

## 1. Pendekatan OOP (Object-Oriented Programming)

### **Nomor 1: Kalkulator (Calculator)**
- Kelas **Kalkulator** menyediakan metode untuk operasi aritmatika dasar:
  - **penjumlahan()**: Menambahkan dua bilangan.
  - **pengurangan()**: Mengurangi dua bilangan.
  - **perkalian()**: Mengalikan dua bilangan.
  - **pembagian()**: Membagi dua bilangan dengan pengecekan pembagian nol.

### **Nomor 2: Murid (Student)**
- Kelas **Murid** digunakan untuk menyimpan dan menampilkan informasi murid, seperti:
  - **nama**: Nama siswa.
  - **id_murid**: ID siswa.
  - **nilai**: Nilai siswa.
- Metode **tampilkanInfoMurid()** menampilkan informasi tersebut.

### **Nomor 3: PersegiPanjang (Rectangle)**
- Kelas **PersegiPanjang** digunakan untuk menghitung luas persegi panjang berdasarkan panjang dan lebar yang diberikan.
- Metode **hitungLuas()** menghitung dan mengembalikan luas persegi panjang.

### **Nomor 4: Penghitung (Counter)**
- Kelas **Penghitung** menyimpan nilai penghitung dan memiliki metode untuk menambah nilai penghitung dan mengambil nilai penghitung saat ini.
- Metode **tambah()** menambah nilai penghitung, sedangkan **ambilHitung()** mengambil nilai saat ini.

### **Nomor 5: Titik (Point)**
- Kelas **Titik** merepresentasikan titik dalam ruang 2D.
- Metode **jarakDariAsal()** menghitung jarak titik dari titik asal (0, 0) menggunakan rumus Pythagoras.

---

## 2. Pendekatan Tanpa OOP (Prosedural)

### **Nomor 1: Kalkulator (Calculator)**
- Program ini menggunakan fungsi untuk melakukan operasi aritmatika dasar:
  - **penjumlahan()**: Menambahkan dua bilangan.
  - **pengurangan()**: Mengurangi dua bilangan.
  - **perkalian()**: Mengalikan dua bilangan.
  - **pembagian()**: Membagi dua bilangan dengan pengecekan pembagian nol.

### **Nomor 2: Murid (Student)**
- Fungsi **tampilkanInfoMurid()** digunakan untuk menampilkan informasi murid:
  - **nama**: Nama siswa.
  - **id_murid**: ID siswa.
  - **nilai**: Nilai siswa.
- Semua data siswa diberikan dalam variabel dan ditampilkan dalam satu fungsi.

### **Nomor 3: PersegiPanjang (Rectangle)**
- Fungsi **hitungLuasPersegiPanjang()** digunakan untuk menghitung luas persegi panjang berdasarkan panjang dan lebar yang diberikan.

### **Nomor 4: Penghitung (Counter)**
- Fungsi **tambahPenghitung()** digunakan untuk menambah nilai penghitung, dan nilai penghitung dapat dilihat setelah proses penambahan.

### **Nomor 5: Titik (Point)**
- Fungsi **hitungJarakDariAsal()** digunakan untuk menghitung jarak titik dari titik asal (0, 0) menggunakan rumus Pythagoras.

---

## Penggunaan

1. **Dengan OOP**:  
   - Di setiap kelas, Anda membuat objek dan memanggil metode untuk melakukan operasi sesuai kebutuhan.
   - Kelas seperti **Kalkulator**, **Murid**, **PersegiPanjang**, **Penghitung**, dan **Titik** dapat digunakan untuk memproses data dengan cara yang lebih terstruktur dan dapat diperluas.

2. **Tanpa OOP**:  
   - Fungsi digunakan untuk memproses data secara langsung tanpa mendefinisikan kelas.
   - Ini adalah pendekatan yang lebih sederhana dan langsung, baik untuk aplikasi kecil.

---

**Contoh Output**:
- **Kalkulator**: Menampilkan hasil penjumlahan, pengurangan, perkalian, dan pembagian.
- **Murid**: Menampilkan informasi tentang siswa.
- **PersegiPanjang**: Menampilkan luas persegi panjang.
- **Penghitung**: Menampilkan nilai penghitung saat ini.
- **Titik**: Menampilkan jarak titik dari asal (0, 0).

---

### Penutup
- Pendekatan **OOP** cocok untuk aplikasi yang lebih besar dan membutuhkan organisasi data yang lebih baik.
- Pendekatan **tanpa OOP** lebih sederhana dan mudah digunakan untuk aplikasi kecil yang tidak membutuhkan struktur kelas yang rumit.

Jika ada pertanyaan atau hal lainnya yang ingin ditanyakan, silakan hubungi saya!
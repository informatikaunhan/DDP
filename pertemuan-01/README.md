# DDP101 - Pertemuan 1: Pengenalan Pemrograman dan C++

**Program Studi Informatika - FTTP - Universitas Pertahanan Republik Indonesia**  
**Mata kuliah:** Dasar-Dasar Pemrograman (3 SKS)  
**Pertemuan:** 1  
**IDE utama:** Code::Blocks + MinGW GCC

<p align="center">
  <img src="assets/logo-unhan-ri.png" width="150" alt="Logo Universitas Pertahanan Republik Indonesia">
</p>

> Fokus pertemuan ini: membangun model mental dari **masalah -> algoritma -> source code -> compiler -> executable -> output**.

---

## Capaian belajar

Setelah menyelesaikan modul mandiri ini, Anda diharapkan mampu:

1. menjelaskan istilah program, pemrograman, bahasa pemrograman, compiler, dan IDE;
2. mengenali paradigma prosedural, object-oriented, dan generic pada tingkat pengenalan;
3. menjelaskan alur kompilasi dan eksekusi program C++;
4. membaca struktur program C++ sederhana;
5. membuat dan menjalankan program `Hello World`;
6. menggunakan pesan compiler sebagai petunjuk awal debugging.

## Peta belajar

```text
Masalah
  |
  v
Algoritma / langkah solusi
  |
  v
Source code (.cpp)
  |
  v
Compiler + linker
  |
  v
Executable
  |
  v
Run -> Output -> Periksa hasil
```

## 1. Program dan pemrograman

**Program** adalah sekumpulan instruksi agar komputer melakukan pekerjaan tertentu.  
**Pemrograman** adalah proses yang lebih luas: memahami masalah, merancang solusi, menulis kode, menguji, dan memperbaiki kesalahan.

Komputer tidak menebak maksud programmer. Karena itu, solusi perlu dinyatakan secara eksplisit dan mengikuti aturan bahasa.

### Coba jawab sebelum lanjut

Apa yang salah dengan pernyataan berikut?

> "Kalau kode terlihat benar bagi saya, komputer seharusnya memahami maksud saya."

<details>
<summary>Jawaban</summary>

Komputer menjalankan instruksi sesuai sintaks dan semantik bahasa, bukan berdasarkan niat programmer. Kode yang tampak masuk akal bagi manusia tetap dapat salah secara sintaks maupun logika.

</details>

## 2. Algoritma sebelum kode

Contoh masalah: hitung rata-rata tiga nilai tetap.

```text
1. Tetapkan A, B, dan C
2. jumlah = A + B + C
3. rata_rata = jumlah / 3
4. tampilkan rata_rata
```

Algoritma ini belum bergantung pada bahasa pemrograman tertentu. Setelah langkahnya jelas, barulah kita memilih cara menuliskannya di C++.

## 3. Sekilas paradigma pemrograman

| Paradigma | Gagasan sederhana | Posisi di mata kuliah |
|---|---|---|
| Prosedural | program sebagai urutan langkah/fungsi | fondasi awal |
| Object-oriented | program sebagai objek dengan data dan perilaku | dipelajari pada bagian akhir |
| Generic | algoritma dibuat untuk bekerja pada berbagai tipe | pengenalan bertahap melalui C++ |

C++ adalah bahasa multi-paradigma. Pada tahap awal kita memakai pendekatan prosedural agar aliran eksekusi mudah terlihat.

## 4. Toolchain yang dipakai

- **Editor/IDE:** Code::Blocks
- **Compiler/toolchain:** MinGW GCC
- **Source file utama:** `.cpp`

**IDE bukan compiler.** Code::Blocks membantu kita mengelola proyek dan memanggil compiler. Compiler-lah yang menerjemahkan source code dan mendeteksi banyak kesalahan.

## 5. Program C++ pertama

Buka `examples/hello_world.cpp` atau ketik sendiri:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, Kadet Informatika!" << std::endl;
    return 0;
}
```

### Baca baris demi baris

- `#include <iostream>`: menyediakan fasilitas stream I/O standar.
- `int main()`: titik awal program sederhana.
- `{ ... }`: blok isi fungsi.
- `std::cout`: menampilkan output ke console.
- `<<`: memasukkan data ke stream output.
- `;`: mengakhiri statement.
- `return 0;`: mengembalikan status sukses dari `main`.

### Latihan 1

Ubah output menjadi dua baris:

```text
DDP101 - Pertemuan 1
Nama: <nama Anda>
```

Jangan copy-paste seluruh jawaban dari orang lain. Ketik sendiri agar terbiasa dengan simbol `"`, `;`, `{`, dan `}`.

## 6. Program yang melakukan komputasi

Buka `examples/aritmatika.cpp`.

```cpp
#include <iostream>

int main() {
    int a = 12;
    int b = 8;
    int jumlah = a + b;

    std::cout << "Hasil: " << jumlah << std::endl;
    return 0;
}
```

Pada Pertemuan 2 kita akan membahas `int`, variabel, konstanta, dan operator secara formal. Untuk sekarang, lihat pola besarnya: **simpan data -> lakukan operasi -> tampilkan hasil**.

## 7. Error Lab

Salin program Hello World ke proyek terpisah. Lakukan satu perubahan salah pada satu waktu.

### Eksperimen A - hilangkan titik koma

```cpp
std::cout << "Belajar C++" << std::endl
```

Build. Baca **pesan error pertama**.

### Eksperimen B - salah ejaan

```cpp
std::coutt << "Belajar C++" << std::endl;
```

### Eksperimen C - kutip tidak ditutup

```cpp
std::cout << "Belajar C++ << std::endl;
```

Catat untuk setiap eksperimen:

| Eksperimen | Pesan compiler penting | Dugaan penyebab | Perbaikan |
|---|---|---|---|
| A |  |  |  |
| B |  |  |  |
| C |  |  |  |

> Kebiasaan awal yang baik: perbaiki error dari atas ke bawah dan build kembali secara bertahap.

## 8. Mini kuis

### 1. Mana yang paling tepat menggambarkan compiler?

A. Tempat menyimpan source code  
B. Alat yang menerjemahkan dan memeriksa kode untuk proses build  
C. Nama lain dari keyboard  
D. Program untuk membuat slide

<details><summary>Jawaban</summary>B.</details>

### 2. Fungsi utama program C++ sederhana bernama ...

<details><summary>Jawaban</summary><code>main()</code>.</details>

### 3. Syntax error dan logic error sama-sama selalu ditemukan compiler.

<details><summary>Jawaban</summary>Salah. Logic error dapat menghasilkan program yang berjalan tetapi memberi hasil keliru.</details>

### 4. Mengapa algoritma sebaiknya dipikirkan sebelum kode?

<details><summary>Jawaban</summary>Karena kita ingin memisahkan logika penyelesaian masalah dari detail sintaks bahasa. Ini membuat solusi lebih mudah diuji dan dijelaskan.</details>

## 9. Challenge mandiri

Buat program C++ yang:

1. menyimpan tiga nilai integer tetap;
2. menghitung total;
3. menampilkan judul `REKAP NILAI LATIHAN`;
4. menampilkan total;
5. berhasil di-Build tanpa error.

**Batasan:** belum perlu meminta input dari pengguna.

## 10. Refleksi

Tulis 3-5 kalimat di catatan belajar Anda:

- Bagian apa yang paling mudah?
- Simbol apa yang paling sering salah ketik?
- Apa perbedaan yang Anda pahami antara source code, compiler, dan executable?
- Ketika compiler error muncul, langkah pertama apa yang akan Anda lakukan?

## 11. Checklist selesai

- [ ] Saya dapat menjelaskan program vs pemrograman.
- [ ] Saya dapat menjelaskan IDE vs compiler.
- [ ] Saya dapat membuat proyek Console Application C++.
- [ ] Saya dapat menjalankan Hello World.
- [ ] Saya dapat memprediksi output program aritmatika sederhana.
- [ ] Saya pernah sengaja membuat error dan membaca pesan compiler.
- [ ] Saya menyelesaikan challenge mandiri.

## 12. Referensi

1. Deitel, P. J., & Deitel, H. M. (2016). *C++ How to Program* (10th ed.). Pearson, Ch. 1-2.
2. Savitch, W. (2017). *Problem Solving with C++* (10th ed.). Pearson, Ch. 1.
3. Stroustrup, B. (2022). *Programming: Principles and Practice Using C++* (3rd ed.). Addison-Wesley Professional, Ch. 1-2.
4. Code::Blocks official downloads and user manual.

---

**Berikutnya:** Pertemuan 2 - tipe data, variabel, konstanta, dan operator.

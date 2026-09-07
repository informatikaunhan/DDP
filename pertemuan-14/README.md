# DDP101 - Pertemuan 14: File Handling dan Exception Handling

**Program Studi Informatika - Universitas Pertahanan Republik Indonesia**  
**CPMK 4, CPMK 5 | Sub-CPMK 4.2, 5.1 | C++17**

Pertemuan ini menghubungkan program dengan **persistent storage** dan membangun kebiasaan **robust error handling**. Fokusnya bukan sekadar membuat file, tetapi memastikan program tetap dapat menjelaskan dan menangani kegagalan.

## Target belajar

Setelah belajar mandiri, Anda mampu:
1. memakai `ifstream`, `ofstream`, `fstream`;
2. membaca/menulis file teks dan binary sederhana;
3. memilih file mode dan memeriksa stream state;
4. memakai `seekg/seekp/tellg/tellp`;
5. memakai `try`, `throw`, `catch` dan standard exception;
6. memahami stack unwinding dan RAII;
7. menerapkan validation, logging, dan graceful recovery.

## Jalur belajar 60-75 menit

### 0-10 menit - Stream dan file teks
Kompilasi `01_text_write_read.cpp` dan `02_getline_tokens.cpp`. Perhatikan beda `>>` dan `getline()`.

### 10-20 menit - Mode, logging, status
Jalankan `03_append_log.cpp` dan `04_stream_status.cpp`. Coba file tidak ada dan data rusak.

### 20-30 menit - Posisi dan binary
Jalankan `05_seek_tell.cpp` dan `06_binary_record.cpp`. Catat `sizeof(Record)` dan offset record kedua.

### 30-45 menit - Exception
Jalankan `07_try_catch.cpp` dan `08_custom_exception.cpp`. Uji jalur normal dan jalur error.

### 45-55 menit - RAII + stack unwinding
Jalankan `09_raii_unwinding.cpp`. Amati destructor dipanggil ketika exception keluar dari fungsi.

### 55-75 menit - Integrasi
Pelajari `10_demo_terpadu.cpp`, lalu mulai `challenge/starter_file_database.cpp`.

## Kompilasi

```bash
g++ -std=c++17 -Wall -Wextra examples/01_text_write_read.cpp -o app
./app
```

Pada Windows/Code::Blocks, pastikan working directory tempat program berjalan memiliki izin tulis.

## Peta konsep

```text
program
  |
  +-- file stream
  |     +-- text: <<, >>, getline, get, put
  |     +-- mode: in/out/app/binary
  |     +-- state: good/fail/bad/eof
  |     +-- position: seek/tell
  |     +-- binary: read/write bytes
  |
  +-- error strategy
        +-- validate
        +-- return/status
        +-- throw exception
        +-- catch + log + recover
        +-- RAII -> cleanup otomatis
```

## Error Lab

Coba ubah kode agar terjadi kondisi berikut:
- nama file salah;
- permission/path tidak tersedia;
- `nilai` berisi teks bukan angka;
- pembagi nol;
- record binary dibaca dengan ukuran berbeda;
- baris CSV rusak.

Untuk setiap kasus, jawab: **apa yang gagal, bagaimana mendeteksi, apa respons program, dan apakah program bisa melanjutkan?**

## Mini-check

<details><summary>1. Mengapa while(!file.eof()) tidak dianjurkan?</summary>`eof` baru aktif setelah percobaan baca melewati akhir file; operasi baca sebaiknya langsung menjadi kondisi loop.</details>

<details><summary>2. Apa beda ios::out dan ios::app?</summary>`ios::out` membuka untuk menulis dan dapat men-truncate isi lama; `ios::app` memaksa setiap penulisan ke akhir file.</details>

<details><summary>3. Kapan exception cocok?</summary>Saat fungsi tidak dapat memenuhi kontraknya dan caller yang lebih tinggi perlu menentukan recovery/reporting.</details>

<details><summary>4. Apa manfaat RAII?</summary>Resource dilepas otomatis saat object keluar dari lifetime, termasuk ketika exception menyebabkan stack unwinding.</details>

<details><summary>5. Mengapa raw binary struct tidak portable?</summary>Padding, ukuran tipe, alignment, endianness, dan ABI dapat berbeda antar platform/compiler.</details>

## Challenge - Mini File Database

Buka `challenge/starter_file_database.cpp` dan lengkapi:
- Create / List / Search / Update / Delete;
- validasi nama dan nilai;
- custom `DataError`;
- logging append ke `data/error.log`;
- recovery ke menu bila error masih dapat dipulihkan;
- test case minimal 8 skenario.

> Prinsip: **robust bukan berarti tidak pernah gagal; robust berarti gagal secara terdeteksi, terjelaskan, dan terkendali.**

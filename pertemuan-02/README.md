# DDP101 - Pertemuan 2: Tipe Data, Variabel, dan Operator

**Program Studi Informatika - FTTP - Universitas Pertahanan Republik Indonesia**  
**Mata kuliah:** Dasar-Dasar Pemrograman (3 SKS)  
**Pertemuan:** 2  
**CPMK:** 2 | **Sub-CPMK:** 2.1  
**IDE utama:** Code::Blocks + MinGW GCC

<p align="center">
  <img src="assets/logo-unhan-ri.png" width="150" alt="Logo Universitas Pertahanan Republik Indonesia">
</p>

> Fokus pertemuan ini: **nilai -> tipe data -> variabel/konstanta -> operator -> ekspresi -> hasil**.

---

## Capaian belajar

Setelah belajar mandiri, Anda diharapkan mampu:

1. memilih `int`, `float`, `double`, `char`, atau `bool` sesuai kebutuhan sederhana;
2. membedakan deklarasi, inisialisasi, dan assignment;
3. menggunakan `const` dan mengenali beberapa jenis literal;
4. menggunakan operator aritmatika, assignment, increment/decrement, relasional, dan logika;
5. menjelaskan perbedaan operator logika dan bitwise;
6. menjelaskan integer division dan memperbaikinya dengan `static_cast`;
7. menyelesaikan program bangun datar dan konversi suhu dengan data tetap.

> Belum memakai `cin`/`getline`. Input interaktif adalah fokus Pertemuan 3.

## Peta belajar

```text
Data dunia nyata
      |
      v
Pilih representasi
(int / float / double / char / bool)
      |
      v
Simpan sebagai variabel / const
      |
      v
Bangun ekspresi dengan operator
      |
      v
Periksa tipe + urutan operasi
      |
      v
Hasil
```

## 1. Tipe data adalah aturan representasi

Contoh:

```cpp
int jumlahKadet = 30;
double suhuServer = 28.5;
char grade = 'A';
bool sistemAktif = true;
```

| Tipe | Cocok untuk | Contoh |
|---|---|---|
| `int` | bilangan bulat | `42`, `-7` |
| `float` | pecahan presisi tunggal | `3.14f` |
| `double` | pecahan presisi lebih tinggi | `3.14159` |
| `char` | satu karakter/code unit | `'A'` |
| `bool` | kondisi logika | `true`, `false` |

### Jangan hafal ukuran byte secara universal

Coba jalankan `examples/01_tipe_data_sizeof.cpp`.

`sizeof` memberi ukuran tipe pada compiler/platform yang sedang Anda gunakan. Catat hasilnya.

<details>
<summary>Checkpoint konsep</summary>

Mengapa kita tidak menulis "int pasti 4 byte" sebagai aturan universal? Karena ukuran fundamental type C++ dapat bergantung implementasi. Yang dapat Anda ukur langsung pada lingkungan kelas adalah hasil `sizeof`.

</details>

## 2. Deklarasi, inisialisasi, assignment

```cpp
int skor;        // deklarasi
skor = 80;       // assignment

int level = 1;   // deklarasi + inisialisasi
level = 2;       // assignment baru
```

**Jangan tertukar:**

- `=`: assignment
- `==`: perbandingan kesamaan

### Latihan cepat

Manakah yang menyatakan pertanyaan "apakah skor sama dengan 80"?

A. `skor = 80`  
B. `skor == 80`

<details><summary>Jawaban</summary>B. `==` menghasilkan nilai boolean berdasarkan hasil perbandingan.</details>

## 3. Konstanta dan literal

```cpp
const double PI = 3.141592653589793;
const int MAKS_KADET = 40;
```

Contoh literal:

```cpp
42       // integer literal
3.14     // floating-point literal (umumnya double)
3.14f    // float literal
'A'      // character literal
true     // boolean literal
```

Gunakan `const` saat sebuah nilai seharusnya tidak berubah selama bagian program tersebut berjalan.

## 4. Operator aritmatika

```cpp
int a = 17;
int b = 5;

int jumlah = a + b;   // 22
int selisih = a - b;  // 12
int kali = a * b;     // 85
int bagi = a / b;     // 3
int sisa = a % b;     // 2
```

### Jebakan penting: integer division

```cpp
int total = 5;
int n = 2;

double x = total / n;                         // 2.0
double y = static_cast<double>(total) / n;    // 2.5
```

Mengapa `x` bukan 2.5? Karena `total / n` dievaluasi sebagai pembagian `int` terlebih dahulu. Baru hasil `2` dikonversi ke `double`.

## 5. Assignment, increment, decrement

```cpp
int x = 10;
x += 5;   // 15
x -= 2;   // 13
x++;      // 14
x--;      // 13
```

Pada tahap awal, gunakan increment/decrement pada statement sederhana. Hindari ekspresi rumit yang mencampur beberapa `++` sekaligus.

## 6. Operator relasional

```cpp
int suhu = 29;

bool a = suhu <= 30;  // true
bool b = suhu > 40;   // false
bool c = suhu == 29;  // true
bool d = suhu != 29;  // false
```

Operator relasional menghasilkan `bool`.

## 7. Operator logika

```cpp
bool suhuAman = true;
bool bateraiCukup = false;

bool siap1 = suhuAman && bateraiCukup; // false
bool siap2 = suhuAman || bateraiCukup; // true
bool gagal = !suhuAman;                // false
```

| A | B | `A && B` | `A || B` |
|---|---|---|---|
| false | false | false | false |
| false | true | false | true |
| true | false | false | true |
| true | true | true | true |

## 8. Operator bitwise

Bitwise bekerja per bit pada nilai integer.

```cpp
unsigned int a = 6; // 0110
unsigned int b = 3; // 0011

unsigned int andBit = a & b; // 0010 = 2
unsigned int orBit  = a | b; // 0111 = 7
unsigned int xorBit = a ^ b; // 0101 = 5
```

**Bedakan:** `&&` adalah logical AND, sedangkan `&` adalah bitwise AND.

## 9. Prioritas operator

```cpp
int hasil1 = 2 + 3 * 4;     // 14
int hasil2 = (2 + 3) * 4;   // 20
```

Daripada menghafal seluruh tabel precedence, biasakan memakai tanda kurung saat ekspresi mulai kompleks:

```cpp
bool lulus = (nilai >= 60) && (kehadiran >= 80);
```

## 10. Casting yang eksplisit

Gunakan bentuk yang mudah dibaca:

```cpp
double rata = static_cast<double>(total) / jumlahData;
```

### Uji pemahaman

Apa beda kedua baris ini?

```cpp
static_cast<double>(total) / n
static_cast<double>(total / n)
```

<details><summary>Jawaban</summary>

Pada baris pertama, `total` dikonversi sebelum pembagian sehingga pembagian berlangsung sebagai floating-point. Pada baris kedua, pembagian integer sudah terjadi lebih dulu; pecahan yang hilang tidak dapat dikembalikan oleh cast setelahnya.

</details>

## 11. Contoh program: luas dan keliling

Lihat `examples/07_luas_keliling.cpp`.

```cpp
double panjang = 12.5;
double lebar = 8.0;

double luas = panjang * lebar;
double keliling = 2 * (panjang + lebar);
```

Perhatikan tanda kurung pada rumus keliling.

## 12. Contoh program: konversi suhu

Lihat `examples/08_konversi_suhu.cpp`.

```cpp
double celsius = 30.0;
double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
double kelvin = celsius + 273.15;
```

Angka `9.0` dan `5.0` sengaja floating-point agar maksud operasi jelas.

## 13. Error Lab mandiri

Lakukan satu perubahan salah pada satu waktu.

### A. Ubah const

Tambahkan:

```cpp
const int MAKS = 5;
MAKS = 6;
```

Catat pesan compiler.

### B. Salah menggunakan karakter

Bandingkan:

```cpp
char kode = 'A';
// char kode2 = "A"; // eksperimen: Build dan baca error
```

### C. Salah memilih = dan ==

Tulis dua ekspresi secara terpisah dan jelaskan perbedaan maknanya:

```cpp
skor = 80;
skor == 80;
```

Jangan hanya melihat "bisa dikompilasi atau tidak"; baca apa yang sebenarnya dilakukan program.

## 14. Mini kuis

### 1. Tipe apa yang paling tepat untuk menyimpan jumlah kadet?

<details><summary>Jawaban</summary>`int`, karena jumlah adalah bilangan bulat pada konteks sederhana ini.</details>

### 2. Apa hasil `7 / 2` bila kedua operand `int`?

<details><summary>Jawaban</summary>`3`.</details>

### 3. Mana operator logical AND?

A. `&`  
B. `&&`

<details><summary>Jawaban</summary>B. `&&`.</details>

### 4. Apa fungsi `const`?

<details><summary>Jawaban</summary>Menyatakan bahwa objek tersebut tidak boleh diubah melalui assignment setelah diinisialisasi.</details>

### 5. Mengapa parentheses penting?

<details><summary>Jawaban</summary>Membuat maksud dan urutan operasi lebih jelas serta mengurangi salah tafsir terhadap precedence.</details>

## 15. Challenge mandiri

Buka `starter/challenge_status_sistem.cpp` dan lengkapi program.

Data awal:

- `suhu = 31`
- `baterai = 72`
- `koneksi = true`

Buat:

```text
suhuAman       = suhu <= 30
bateraiCukup   = baterai >= 50
siapOperasi    = suhuAman AND bateraiCukup AND koneksi
```

Tampilkan semua status. Setelah benar, ubah `suhu` menjadi `29` dan bandingkan output.

## 16. Checklist selesai

- [ ] Saya dapat membedakan `int`, `float`, `double`, `char`, dan `bool`.
- [ ] Saya sudah menjalankan contoh `sizeof`.
- [ ] Saya dapat menjelaskan deklarasi, inisialisasi, dan assignment.
- [ ] Saya dapat menjelaskan `=` vs `==`.
- [ ] Saya dapat memprediksi integer division.
- [ ] Saya dapat menggunakan `static_cast` sebelum pembagian.
- [ ] Saya dapat menggunakan operator relasional dan logika.
- [ ] Saya dapat membedakan `&&` dan `&`.
- [ ] Saya menyelesaikan challenge mandiri.

## 17. Referensi

1. Deitel, P. J., & Deitel, H. M. (2016). *C++ How to Program* (10th ed.). Pearson, Ch. 2-3.
2. Savitch, W. (2017). *Problem Solving with C++* (10th ed.). Pearson, Ch. 2.
3. Stroustrup, B. (2022). *Programming: Principles and Practice Using C++* (3rd ed.). Addison-Wesley Professional, Ch. 3.
4. Silabus DDP101, Pertemuan 2.

---

**Berikutnya:** Pertemuan 3 - Input dan Output (`cin`, `getline`, `cout`, dan pemformatan output).

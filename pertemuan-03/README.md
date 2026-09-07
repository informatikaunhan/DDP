<p align="center"><img src="assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

# DDP101 - Pertemuan 3: Input dan Output
**Program Studi Informatika - FTTP - Universitas Pertahanan RI**  
**CPMK 2 | Sub-CPMK 2.2 | C++17 | Code::Blocks + MinGW GCC**

Pertemuan ini mengubah program dari sesuatu yang hanya memakai nilai tetap menjadi program yang **berinteraksi dengan pengguna**. Anda akan belajar bagaimana data masuk melalui `cin`/`getline`, bagaimana hasil keluar melalui `cout`, bagaimana output dibuat rapi dengan `<iomanip>`, dan bagaimana stream memberi tahu kita ketika input gagal.

## Target belajar
Setelah menyelesaikan modul ini, Anda dapat:
1. menggunakan `cin` untuk membaca nilai bertipe;
2. menggunakan `getline` untuk membaca satu baris teks;
3. mencampur `cin >>` dan `getline` secara aman;
4. memformat output dengan `setw`, `fixed`, `setprecision`, `left`, dan `right`;
5. mengenali `fail state` pada input stream;
6. menulis data sederhana ke file menggunakan `ofstream`.

## Peta konsep
```text
PENGGUNA
   |
   v
keyboard -> cin / getline -> variabel -> proses -> cout -> terminal
                                  |
                                  +------> ofstream -> file teks
```

> **Model mental:** `cin`, `cout`, dan file stream adalah objek *stream*. Operator `>>` mengekstrak data dari stream; operator `<<` menyisipkan data ke stream.

---

## 1. Output dengan `cout`
```cpp
#include <iostream>
using namespace std;

int main() {
    int personel = 32;
    cout << "Jumlah personel: " << personel << '\n';
}
```

`<<` dapat dirangkai karena hasil operasi tetap mengacu pada output stream yang sama.

### Escape sequence penting
| Escape | Fungsi |
|---|---|
| `\n` | baris baru |
| `\t` | tab horizontal |
| `\\` | menampilkan backslash |
| `\"` | menampilkan tanda kutip ganda |

**Latihan cepat:** jalankan `examples/01_cout_dasar.cpp`, lalu tambahkan satu baris yang mencetak `C:\DDP101\P03`.

---

## 2. Input dengan `cin`
```cpp
int jumlah;
double durasi;
cin >> jumlah >> durasi;
```

`cin >>` melewati whitespace awal lalu mencoba mengubah karakter menjadi tipe variabel tujuan. Karena itu `int` mengharapkan bilangan bulat, `double` dapat menerima pecahan, dan `string` melalui `>>` hanya menerima satu token.

Jalankan:
- `examples/02_cin_dasar.cpp`
- `examples/03_multi_input.cpp`

### Prediksi sebelum Run
Apa yang terjadi bila program meminta `int`, tetapi Anda mengetik `dua puluh`?

<details><summary>Jawaban</summary>

Konversi gagal dan `cin` masuk ke *fail state*. Nilai tujuan tidak diperbarui dengan input yang valid, dan operasi input berikutnya akan ikut gagal sampai state dipulihkan.

</details>

---

## 3. `getline`: membaca satu baris lengkap
```cpp
string nama;
getline(cin, nama);
```

Berbeda dari `cin >> nama`, `getline` tidak berhenti pada spasi. Ia membaca hingga newline.

Jalankan `examples/04_getline.cpp` dan masukkan:
```text
Satuan Siber Utama
```

---

## 4. Jebakan `cin >>` lalu `getline`
Kode berikut sering membuat `getline` tampak dilewati:
```cpp
int angkatan;
string nama;
cin >> angkatan;
getline(cin, nama);
```

Masalahnya adalah newline dari input sebelumnya masih berada di buffer.

Untuk tahap ini gunakan:
```cpp
getline(cin >> ws, nama);
```

Jalankan `examples/05_cin_getline.cpp`.

---

## 5. Output terformat dengan `<iomanip>`
```cpp
#include <iomanip>
cout << left << setw(18) << "Parameter"
     << right << setw(10) << "Nilai" << '\n';
cout << fixed << setprecision(2) << 92.375 << '\n';
```

| Manipulator | Inti fungsi |
|---|---|
| `setw(n)` | lebar minimum **field berikutnya** |
| `left`, `right` | alignment |
| `fixed` | notasi desimal tetap |
| `setprecision(n)` | digit pecahan saat `fixed` aktif |
| `setfill(c)` | karakter pengisi |

Jalankan `examples/06_format_output.cpp`.

> `setw` tidak permanen; tulis ulang untuk field berikutnya. `fixed` dan `setprecision` memengaruhi state stream sampai diubah lagi.

---

## 6. Validasi input sederhana
```cpp
if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
```

`if` di sini hanya dipakai sebagai alat untuk memeriksa state. Percabangan dibahas sistematis pada Pertemuan 4.

Jalankan `examples/07_validasi_input.cpp` dengan input:
1. `25`
2. `dua`
3. `25.5`

Catat perbedaannya.

---

## 7. Pengantar file stream
`ofstream` adalah output stream yang tujuannya file, bukan terminal.

```cpp
#include <fstream>
ofstream file("rekap.txt");
file << "Status: SIAP\n";
```

Jalankan:
- `examples/08_file_output_intro.cpp`
- `examples/09_file_input_intro.cpp`

File handling lengkap akan dipelajari lagi pada CPMK 5.

---

## 8. Jalur belajar mandiri 45-60 menit
| Waktu | Aktivitas |
|---:|---|
| 0-10 mnt | baca peta konsep + `cout`/`cin` |
| 10-20 mnt | jalankan contoh 01-03 |
| 20-30 mnt | eksperimen `getline` dan mixing input |
| 30-40 mnt | buat tabel dengan `<iomanip>` |
| 40-50 mnt | uji input gagal dan pemulihan stream |
| 50-60 mnt | kerjakan challenge |

## 9. Challenge
Buka `challenge/starter.cpp`.

Buat **Formulir Rekap Latihan** yang meminta:
- nama kadet;
- kode/NIM;
- nama unit;
- jumlah personel;
- durasi latihan;
- nilai kesiapan.

Syarat:
- teks yang dapat mengandung spasi harus memakai `getline`;
- numerik memakai `cin`;
- output rapi menggunakan `setw`, `fixed`, `setprecision`;
- simpan ringkasan ke `rekap_latihan.txt`;
- minimal satu input numerik diperiksa dengan `cin.fail()`.

<details><summary>Checklist mandiri</summary>

- [ ] Saya dapat menjelaskan `>>` vs `<<`.
- [ ] Saya tahu mengapa `cin >> string` berhenti pada spasi.
- [ ] Saya dapat memperbaiki mixing `cin >>` + `getline`.
- [ ] Saya memahami `setw` hanya berlaku untuk field berikutnya.
- [ ] Saya dapat menjelaskan arti *fail state*.
- [ ] Saya berhasil membuat file teks dari C++.

</details>

## 10. Mini check
1. Mengapa `getline` cocok untuk nama lengkap?
2. Apa perbedaan `fixed << setprecision(2)` dengan `setprecision(2)` tanpa `fixed`?
3. Mengapa input huruf dapat membuat `cin` gagal saat variabel tujuan bertipe `int`?
4. Apa kesamaan `cout` dan `ofstream`?
5. Apa yang akan kita tambahkan pada Pertemuan 4 agar program dapat mengambil keputusan?

## Referensi
- Deitel & Deitel, *C++ How to Program*, 10th ed., Ch. 3-4.
- Savitch, *Problem Solving with C++*, 10th ed., Ch. 2-3.
- Stroustrup, *Programming: Principles and Practice Using C++*, 3rd ed., Ch. 3, 5, 10.
- Silabus/RPS DDP101, Pertemuan 3.

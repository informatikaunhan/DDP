<p align="center"><img src="assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

# DDP101 - Pertemuan 4: Struktur Kontrol - Percabangan
**Program Studi Informatika - FTTP - Universitas Pertahanan RI**  
**CPMK 2 | Sub-CPMK 2.3 | C++17 | Code::Blocks + MinGW GCC**

Pertemuan ini adalah titik ketika program mulai **mengambil keputusan**. Data yang masuk tidak lagi selalu diproses dengan jalur yang sama. Program dapat memilih tindakan berdasarkan kondisi.

## Target belajar
Setelah modul ini, Anda dapat:
1. menyusun kondisi boolean yang benar;
2. menggunakan `if`, `if-else`, dan `else-if`;
3. menggunakan `switch-case`, `break`, dan `default`;
4. menggunakan ternary `?:` untuk ekspresi sederhana;
5. memilih struktur yang tepat untuk rentang, syarat gabungan, atau nilai diskret;
6. melakukan *boundary testing* pada percabangan.

## Jalur belajar mandiri 60 menit
- **0-10 menit:** kondisi boolean + `if`
- **10-20 menit:** `if-else` + operator logika
- **20-30 menit:** `else-if` + boundary testing
- **30-40 menit:** `switch-case`
- **40-50 menit:** ternary + pemilihan struktur
- **50-60 menit:** challenge mini + refleksi

---

## 1. Kondisi = pertanyaan yang jawabannya true/false
```cpp
nilai >= 75
hadir >= 80
nilai >= 75 && hadir >= 80
menu == 3
```

### Short-circuit
Pada `A && B`, bagian `B` tidak dievaluasi jika `A` sudah `false`. Pada `A || B`, `B` tidak dievaluasi jika `A` sudah `true`.

```cpp
if (pembagi != 0 && total / pembagi > 10) {
    cout << "Rasio > 10\n";
}
```

---

## 2. `if`: satu jalur bersyarat
```cpp
if (nilai >= 75) {
    cout << "Lulus ambang minimum\n";
}
```

**Kebiasaan kelas:** selalu gunakan `{ }`, walaupun blok hanya satu statement.

> Jebakan: `if (nilai >= 75);` memiliki titik koma setelah kondisi. Blok setelahnya tidak lagi dikendalikan `if`.

---

## 3. `if-else`: dua kemungkinan
```cpp
if (n % 2 == 0) {
    cout << "GENAP\n";
} else {
    cout << "GANJIL\n";
}
```

### `==` vs `=`
- `==` membandingkan nilai.
- `=` memberi/mengubah nilai.

```cpp
if (menu == 1) { /* benar untuk membandingkan */ }
```

---

## 4. `else-if`: banyak kategori
```cpp
if (nilai >= 85) {
    cout << "A\n";
} else if (nilai >= 75) {
    cout << "B\n";
} else if (nilai >= 65) {
    cout << "C\n";
} else if (nilai >= 55) {
    cout << "D\n";
} else {
    cout << "E\n";
}
```

**Mengapa urutan penting?** Karena pengecekan berhenti pada kondisi pertama yang `true`.

### Boundary testing
Untuk batas `85`, jangan hanya menguji 90. Uji juga:
- 84 → tepat di bawah;
- 85 → tepat pada batas;
- 86 → tepat di atas.

---

## 5. Nested `if` dan kondisi gabungan
```cpp
if (nilai >= 75) {
    if (hadir >= 80) {
        cout << "LULUS\n";
    } else {
        cout << "Nilai cukup, kehadiran kurang\n";
    }
}
```

Bila hanya perlu hasil biner, dapat dipadatkan:
```cpp
if (nilai >= 75 && hadir >= 80) {
    cout << "LULUS\n";
} else {
    cout << "TIDAK LULUS\n";
}
```

---

## 6. `switch-case`: nilai diskret
```cpp
switch (menu) {
    case 1:
        cout << "Tambah\n";
        break;
    case 2:
        cout << "Kurang\n";
        break;
    default:
        cout << "Menu tidak valid\n";
}
```

### Kapan `switch` cocok?
- menu `1`, `2`, `3`;
- kode karakter `'A'`, `'B'`, `'C'`;
- nilai enum.

### Kapan tidak cocok?
- rentang nilai seperti `75-84`;
- kondisi `nilai >= 75 && hadir >= 80`;
- `std::string` pada C++17.

### Fall-through terkontrol
```cpp
switch (kelas) {
    case 'A':
    case 'B':
        cout << "PRIORITAS\n";
        break;
    default:
        cout << "LAINNYA\n";
}
```

---

## 7. Ternary `?:`
```cpp
string status = (nilai >= 75) ? "LULUS" : "BELUM LULUS";
```
Gunakan hanya saat keputusan sederhana dan hasilnya tetap mudah dibaca.

---

## 8. Tentang “pattern matching” pada silabus
Dalam C++17 belum ada general *pattern matching* seperti pada beberapa bahasa modern. Pada pertemuan ini kita memaknai pencocokan pola keputusan sebagai:
- **range pattern** → `if / else-if`;
- **compound condition** → `if` + `&&` / `||`;
- **discrete value pattern** → `switch-case`;
- **multiple labels, same action** → beberapa `case` sebelum satu blok.

---

## 9. Pilih struktur berdasarkan bentuk masalah
| Masalah | Struktur utama |
|---|---|
| satu kondisi | `if` |
| dua jalur | `if-else` |
| banyak rentang/kondisi | `else-if` |
| nilai diskret satu variabel | `switch` |
| dua nilai ekspresi sederhana | `?:` |

---

## 10. Jalankan contoh
```bash
g++ -std=c++17 examples/01_if_satu_arah.cpp -o contoh
./contoh
```

Urutan yang disarankan:
1. `01_if_satu_arah.cpp`
2. `02_if_else_genap.cpp`
3. `03_else_if_nilai.cpp`
4. `04_nested_if.cpp`
5. `05_logika_short_circuit.cpp`
6. `06_switch_menu.cpp`
7. `07_switch_fallthrough.cpp`
8. `08_ternary.cpp`
9. `09_bug_fixed.cpp`
10. `10_demo_kesiapan.cpp`

---

## 11. Mini-check
Coba jawab sebelum membuka jawaban.

1. Mengapa `switch` kurang cocok untuk nilai 0-100 yang dibagi menjadi rentang?
2. Apa beda `=` dan `==`?
3. Mengapa `break` penting pada `switch`?
4. Apa tiga nilai uji yang bagus untuk batas 75?
5. Kapan ternary lebih tepat daripada `if-else`?

<details>
<summary>Jawaban ringkas</summary>

1. Karena `case` cocok pada nilai diskret/konstan, bukan ekspresi rentang.
2. `=` assignment; `==` comparison.
3. Untuk menghentikan eksekusi agar tidak *fall-through* ke case berikutnya.
4. 74, 75, 76.
5. Saat hanya memilih satu dari dua nilai/ekspresi sederhana dan tetap mudah dibaca.
</details>

---

## 12. Challenge: Pos Pemeriksaan Kesiapan
Buka `challenge/starter.cpp`.

Program harus membaca:
- nilai tes `0-100`;
- kehadiran `0-100`;
- keselamatan `0/1`;
- menu laporan `1-3`.

Aturan:
- kategori A/B/C/D/E menggunakan `else-if`;
- `LULUS` jika `nilai >= 75 && hadir >= 80 && aman == 1`;
- menu laporan menggunakan `switch`;
- gunakan ternary minimal satu kali;
- sediakan `default`;
- tidak menggunakan loop.

### Checklist selesai
- [ ] semua contoh dapat dikompilasi
- [ ] memahami `if`, `else-if`, dan `switch`
- [ ] menguji nilai batas
- [ ] menguji `default`
- [ ] challenge selesai

## Preview Pertemuan 5
Berikutnya: **perulangan** dengan `for`, `while`, dan `do-while`. Program tidak hanya memilih jalur, tetapi dapat mengulang proses secara terkontrol.

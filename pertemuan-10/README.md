# DDP101 - Pertemuan 10
## Array Multidimensi

**Program Studi Informatika - FTTP - Universitas Pertahanan Republik Indonesia**  
**Mata kuliah:** Dasar-Dasar Pemrograman (DDP101)  
**CPMK:** CPMK 3  
**Sub-CPMK:** 3.2

![Logo Unhan](assets/logo_unhan.png)

Pertemuan 8 adalah **UTS** dan Pertemuan 9 membahas array 1D. Pertemuan 10 memperluas array menjadi **baris x kolom**, sehingga cocok untuk tabel, grid, dan matriks.

## Target belajar

Setelah belajar mandiri, Anda diharapkan mampu:

- mendeklarasikan dan menginisialisasi array 2D;
- mengakses elemen melalui indeks baris dan kolom;
- melakukan traversal menggunakan nested loops;
- menghitung statistik per baris/per kolom;
- mengirim array 2D ke fungsi;
- membuat penjumlahan, transpose, dan perkalian matriks;
- memakai array 2D untuk data tabular atau papan sederhana.

## Peta konsep

```text
ARRAY 1D
  |
  v
ARRAY 2D = baris x kolom
  |
  +--> nested traversal
  |      row -> column
  |
  +--> function parameter
  |      column width known
  |
  +--> matrix operations
  |      add / transpose / multiply
  |
  +--> applications
         table / grid / board
```

## Jalur belajar 45-60 menit

1. **10 menit** - baca model baris/kolom dan aturan indeks.
2. **10 menit** - compile `01_array2d_dasar.cpp` dan `02_input_tabular.cpp`.
3. **10 menit** - pelajari total baris/kolom dan parameter fungsi.
4. **10 menit** - jalankan penjumlahan dan transpose.
5. **10 menit** - trace perkalian matriks untuk satu elemen hasil.
6. **5-10 menit** - coba papan/grid dan mulai challenge.

## Aturan emas indeks 2D

Untuk:

```cpp
int a[R][C];
```

maka akses valid harus memenuhi:

```text
0 <= r < R
0 <= c < C
```

Traversal penuh:

```cpp
for (int r = 0; r < R; ++r) {
    for (int c = 0; c < C; ++c) {
        // proses a[r][c]
    }
}
```

## Daftar contoh

| File | Fokus |
|---|---|
| `01_array2d_dasar.cpp` | deklarasi + traversal |
| `02_input_tabular.cpp` | input tabel |
| `03_total_baris_kolom.cpp` | agregasi 2D |
| `04_parameter_2d.cpp` | array 2D ke fungsi |
| `05_tambah_matriks.cpp` | penjumlahan matriks |
| `06_transpose.cpp` | transpose non-persegi |
| `07_kali_matriks.cpp` | perkalian matriks |
| `08_papan_3x3.cpp` | aplikasi grid |
| `09_data_tabular.cpp` | rata-rata tabular |
| `10_demo_terpadu.cpp` | fungsi + tabel 2D |

## Mini-check

<details>
<summary>1. `int a[3][4]` memiliki indeks terakhir apa?</summary>

`a[2][3]`.
</details>

<details>
<summary>2. Mengapa ada dua loop untuk traversal?</summary>

Outer loop memilih baris, inner loop mengunjungi kolom pada baris tersebut.
</details>

<details>
<summary>3. Mengapa ukuran kolom perlu diketahui di parameter fungsi?</summary>

Compiler perlu mengetahui lebar satu baris untuk menghitung posisi `a[r][c]`.
</details>

<details>
<summary>4. Jika A berukuran 2x3, berapa ukuran transpose A?</summary>

3x2.
</details>

<details>
<summary>5. Kapan A(RxK) dapat dikalikan dengan B?</summary>

Jika B memiliki K baris. Jika B berukuran KxC, hasilnya RxC.
</details>

## Error Lab

Perhatikan kode berikut:

```cpp
const int R=2, C=3;
int a[R][C]={{1,2,3},{4,5,6}};
for (int r=0; r<=R; ++r)
    for (int c=0; c<=C; ++c)
        cout << a[c][r] << ' ';
```

Sebelum memperbaiki, tuliskan seluruh pasangan `(r,c)` yang akan muncul. Temukan minimal **tiga masalah**.

## Challenge - Dashboard Kesiapan Tim

Gunakan `challenge/starter_dashboard_kesiapan.cpp`.

Program harus:

- menyimpan skor **4 tim x 5 indikator**;
- memvalidasi skor `0..100`;
- menampilkan tabel;
- menghitung rata-rata setiap tim;
- menghitung rata-rata setiap indikator;
- menemukan skor maksimum beserta koordinatnya;
- membuat transpose 5x4;
- menggunakan minimal 5 fungsi selain `main()`.

### Test wajib

- nilai `0` dan `100`;
- semua skor sama;
- skor maksimum berada di `[3][4]`;
- transpose non-persegi 4x5 -> 5x4.

## Checklist selesai

- [ ] Saya bisa menjelaskan `a[row][col]`.
- [ ] Saya selalu memakai `r<R` dan `c<C`.
- [ ] Saya dapat menulis nested traversal tanpa melihat contoh.
- [ ] Saya memahami mengapa ukuran kolom penting pada parameter fungsi.
- [ ] Saya dapat membuat penjumlahan dan transpose matriks.
- [ ] Saya dapat men-trace satu elemen hasil perkalian matriks.
- [ ] Saya menguji array non-persegi untuk menemukan bug dimensi.

## Berikutnya

**Pertemuan 11: Pointer dan Memori Dinamis** - alamat memori, pointer, hubungan pointer-array, `new`, `delete`, dan memory leak.

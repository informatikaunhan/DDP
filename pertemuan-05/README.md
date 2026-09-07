# DDP101 - Pertemuan 5: Struktur Kontrol - Perulangan

**Universitas Pertahanan Republik Indonesia**  
**Program Studi Informatika - FTTP**  
**Mata Kuliah:** Dasar-Dasar Pemrograman (DDP101)  
**CPMK:** CPMK 2 | **Sub-CPMK:** 2.4  
**Bahasa:** C++17

## Capaian belajar

Setelah belajar mandiri, Anda seharusnya dapat:

1. menulis `for`, `while`, dan `do-while`;
2. menentukan kondisi berhenti dan perubahan state;
3. memakai pola counter, accumulator, sentinel, validasi, dan search;
4. menggunakan `break` dan `continue` dengan alasan yang jelas;
5. menulis nested loops untuk pola sederhana;
6. menguji off-by-one dan infinite loop.

## Jalur belajar 45-60 menit

| Menit | Aktivitas |
|---|---|
| 0-8 | Baca model mental loop dan tiga bentuk loop |
| 8-20 | Jalankan contoh `01` sampai `03` |
| 20-32 | Jalankan `04` sampai `06`; ubah batas dan prediksi output |
| 32-42 | Kerjakan statistik dan pencarian streaming (`07`, `08`) |
| 42-50 | Pelajari validasi/menu berulang (`09`, `10`) |
| 50-60 | Kerjakan challenge tanpa melihat contoh lain |

## Model mental

Sebuah loop selalu membutuhkan:

```text
STATE AWAL -> KONDISI? -> BODY -> PERUBAHAN STATE -> kembali ke KONDISI
```

Pertanyaan wajib sebelum menulis loop:

- Mulai dari state apa?
- Kapan loop masih boleh berjalan?
- Apa yang berubah setiap iterasi?
- Bagaimana program akhirnya keluar?

## Memilih jenis loop

- `for`: jumlah iterasi atau pola counter diketahui.
- `while`: jumlah iterasi tidak pasti dan kondisi diperiksa sebelum body.
- `do-while`: body harus berjalan minimal sekali.

## Struktur folder

```text
pertemuan-05-perulangan/
├── README.md
├── assets/
│   └── logo_unhan.png
├── examples/
│   ├── 01_for_dasar.cpp
│   ├── 02_for_accumulator.cpp
│   ├── 03_while_validasi.cpp
│   ├── 04_do_while_menu.cpp
│   ├── 05_break_continue.cpp
│   ├── 06_nested_loop_pola.cpp
│   ├── 07_statistik_stream.cpp
│   ├── 08_cari_target_stream.cpp
│   ├── 09_sentinel.cpp
│   └── 10_demo_terpadu.cpp
└── challenge/
    ├── README.md
    └── starter.cpp
```

## Cara kompilasi

Code::Blocks dapat digunakan seperti pada pertemuan sebelumnya. Dari terminal:

```bash
g++ -std=c++17 examples/01_for_dasar.cpp -o latihan
./latihan
```

Pada Windows, hasil kompilasi biasanya berupa `latihan.exe`.

## Mini check

1. Berapa kali `for (int i=0; i<5; ++i)` berjalan?
2. Apa perbedaan paling penting `while` dan `do-while`?
3. Mengapa `total` biasanya diinisialisasi `0`?
4. Apa risiko `continue` dalam `while` dengan update manual?
5. Apa arti off-by-one?
6. Bagaimana mencari target dari N data tanpa array?

<details>
<summary>Jawaban</summary>

1. Lima kali (`i = 0,1,2,3,4`).
2. `while` mengecek kondisi sebelum body; `do-while` sesudah body sehingga body minimal sekali.
3. Karena accumulator penjumlahan membutuhkan state awal yang pasti dan identitas penjumlahan adalah 0.
4. Update state dapat terlewati sehingga loop berisiko tidak berhenti.
5. Kesalahan batas yang membuat iterasi kurang atau lebih satu.
6. Baca data satu per satu, bandingkan dengan target, gunakan flag dan `break` bila ditemukan.

</details>

## Error Lab

Temukan masalah pada kode berikut sebelum menjalankannya:

```cpp
int i = 1;
while (i <= 5) {
    cout << i << "\n";
}
```

Masalahnya bukan pada `cout`, tetapi pada **state loop yang tidak berubah**.

## Challenge

Buka `challenge/README.md`. Kerjakan tanpa `array`, `vector`, atau fungsi buatan sendiri. Tujuannya adalah mengintegrasikan konsep Pertemuan 1-5 saja.

## Preview Pertemuan 6

Pertemuan berikutnya membahas **fungsi dan parameter passing**: definisi fungsi, return value, pass by value/reference, overloading, default arguments, dan inline functions.

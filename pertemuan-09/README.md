# DDP101 - Pertemuan 9
## Array 1D dan Operasinya

**Program Studi Informatika - FTTP - Universitas Pertahanan Republik Indonesia**  
**Mata kuliah:** Dasar-Dasar Pemrograman (DDP101)  
**CPMK:** CPMK 3  
**Sub-CPMK:** 3.2

![Logo Unhan](assets/logo_unhan.png)

Pertemuan 8 adalah **Ujian Tengah Semester (UTS)**. Setelah UTS, Pertemuan 9 mulai memperluas cara kita mengelola data: dari variabel tunggal menjadi **array satu dimensi**.

## Target belajar

Setelah belajar mandiri, Anda diharapkan mampu:

- mendeklarasikan dan menginisialisasi array 1D;
- mengakses elemen dengan indeks yang valid;
- melakukan traversal menggunakan loop;
- menghitung statistik sederhana dari array;
- mengirim array ke fungsi bersama ukurannya;
- membuat sequential search;
- mengimplementasikan bubble sort dan selection sort;
- mengenali array `char` dan C-string.

## Peta konsep

```text
banyak data bertipe sama
        |
        v
     ARRAY 1D
        |
  +-----+------+----------------+
  |            |                |
index       traversal        function
0..N-1        loop          array + size
  |            |                |
  +------> search <-------- sorting
           linear          bubble/selection
```

## Jalur belajar 45-60 menit

1. **10 menit - model mental**: baca bagian indeks dan batas `0 <= i < N`.
2. **10 menit - traversal**: compile `01_array_dasar.cpp` dan `02_input_traversal.cpp`.
3. **10 menit - agregasi & fungsi**: jalankan `03_statistik.cpp` dan `04_array_parameter.cpp`.
4. **10 menit - search**: trace `05_sequential_search.cpp` untuk target di awal, akhir, dan tidak ada.
5. **10 menit - sort**: bandingkan `06_bubble_sort.cpp` dan `07_selection_sort.cpp`.
6. **5-10 menit - C-string & challenge**: jalankan `09_cstring.cpp`, lalu mulai starter challenge.

## Aturan emas array

Untuk array berukuran `N`, indeks valid adalah:

```cpp
0, 1, 2, ..., N-1
```

Traversal paling aman untuk materi ini:

```cpp
for (int i = 0; i < N; ++i) {
    // akses a[i]
}
```

Bukan:

```cpp
for (int i = 0; i <= N; ++i) { // BUG: mencoba a[N]
}
```

## Daftar contoh

| File | Fokus |
|---|---|
| `01_array_dasar.cpp` | deklarasi, inisialisasi, indeks |
| `02_input_traversal.cpp` | input dan traversal |
| `03_statistik.cpp` | total, rata, min, max |
| `04_array_parameter.cpp` | array sebagai parameter |
| `05_sequential_search.cpp` | sequential search |
| `06_bubble_sort.cpp` | bubble sort + early stop |
| `07_selection_sort.cpp` | selection sort |
| `08_compare_sort.cpp` | membandingkan hasil dua sorting |
| `09_cstring.cpp` | array char dan C-string |
| `10_demo_terpadu.cpp` | statistik + search + sort |

## Mini-check

<details>
<summary>1. Array `int a[5]` memiliki indeks terakhir berapa?</summary>

`4`, karena indeks dimulai dari `0`.
</details>

<details>
<summary>2. Mengapa fungsi `cari()` mengembalikan `-1` jika target tidak ada?</summary>

Karena indeks valid tidak pernah negatif, sehingga `-1` dapat dipakai sebagai sentinel "tidak ditemukan".
</details>

<details>
<summary>3. Mengapa parameter ukuran `n` dikirim bersama array?</summary>

Array gaya C yang diteruskan ke fungsi tidak membawa informasi jumlah elemen secara otomatis.
</details>

<details>
<summary>4. Apa perbedaan ide bubble sort dan selection sort?</summary>

Bubble sort menukar pasangan elemen bersebelahan berulang; selection sort memilih elemen terkecil dari bagian belum terurut lalu menaruhnya pada posisi berikutnya.
</details>

## Error Lab

Perbaiki kode berikut **setelah** Anda menulis trace nilai `i`:

```cpp
const int N = 5;
int a[N] = {10,20,30,40,50};
for (int i = 0; i <= N; ++i) {
    cout << a[i] << '\n';
}
```

Pertanyaan: kapan akses pertama yang berada di luar batas terjadi?

## Challenge - Rekap Data Latihan

Gunakan `challenge/starter_rekap_data.cpp`.

Program harus:

- menerima 10 nilai `0..100`;
- menghitung rata-rata;
- mencari target dan mengembalikan indeks atau `-1`;
- mengurutkan data ascending;
- menampilkan data sebelum dan sesudah sorting;
- menggunakan minimal 4 fungsi selain `main()`.

### Test wajib

Uji data normal, nilai `0` dan `100`, target tidak ditemukan, duplikat, dan input yang sudah terurut.

## Checklist selesai

- [ ] Saya bisa menjelaskan indeks `0..N-1`.
- [ ] Saya tidak memakai `i <= N` untuk traversal penuh.
- [ ] Saya mengirim ukuran array ke fungsi.
- [ ] Saya menangani hasil search `-1`.
- [ ] Saya bisa men-trace satu pass bubble sort.
- [ ] Saya bisa men-trace satu pass selection sort.
- [ ] Saya memahami bahwa C-string berakhir dengan `\0`.

## Berikutnya

**Pertemuan 10: Array Multidimensi** - matriks, nested loops, operasi matriks, dan data tabular.

# DDP101 - Pertemuan 12: Struct, Union, Typedef/using, dan Enum

Program Studi Informatika - Universitas Pertahanan Republik Indonesia  
CPMK 3 | Sub-CPMK 3.4 | C++17

## Target belajar

Sesudah belajar mandiri, Anda mampu membuat `struct`, mengirimkannya ke fungsi, mengelola array/nested struct, menjelaskan shared storage pada `union`, membuat type alias, dan menggunakan `enum class` untuk domain nilai terbatas.

## Rute belajar 60 menit

1. **10 menit - Struct dasar**: baca contoh 01-02.
2. **10 menit - Banyak record**: jalankan 03-04.
3. **10 menit - Union dan type alias**: jalankan 05-06.
4. **10 menit - Enum class**: jalankan 07.
5. **10 menit - Error Lab**: baca dan jalankan 08-09.
6. **10 menit - Integrasi**: jalankan 10 dan mulai challenge.

## Kompilasi

```bash
g++ -std=c++17 -Wall -Wextra examples/01_struct_dasar.cpp -o app
./app
```

## Peta konsep

`struct` = record -> `array of struct` = banyak record -> `nested struct` = record bertingkat  
`union` = beberapa representasi berbagi storage  
`using` / `typedef` = alias nama tipe  
`enum class` = domain nilai terbatas dan scoped

## Pertanyaan prediksi

Sebelum menjalankan contoh, tulis prediksi output dan jawab:

1. Apakah perubahan pada parameter `Mahasiswa m` akan kembali ke caller?
2. Apakah perubahan pada `Mahasiswa& m` akan kembali ke caller?
3. Mengapa ukuran `union` mendekati ukuran member terbesar, bukan penjumlahan semua member?
4. Mengapa `enum class` harus ditulis `Status::Siap`?
5. Apakah `using Skor = double;` menciptakan tipe baru?

<details>
<summary>Jawaban mini-check</summary>

1. Tidak, karena by value membuat salinan.
2. Ya, reference merujuk object caller.
3. Karena semua member berbagi area penyimpanan yang sama.
4. Karena enumerator bersifat scoped.
5. Tidak, hanya alias.

</details>

## Error Lab

- `08_bug_by_value.cpp`: program bisa dikompilasi tetapi update tidak terlihat. Temukan penyebabnya.
- `09_bug_search.cpp`: search gagal menemukan elemen terakhir. Perbaiki boundary loop.

## Challenge: Roster Kesiapan Tim

Buka `challenge/starter_roster.cpp` dan lengkapi:

- `enum class Status { BelumSiap, Siap, SangatSiap }`;
- nested `Identitas`;
- `struct Anggota`;
- array maksimal 20 record;
- fungsi input/update by reference;
- fungsi tampil by `const` reference;
- search by ID;
- statistik rata-rata skor;
- minimal 5 test case.

## Checklist selesai

- [ ] Saya memahami `.` untuk akses member.
- [ ] Saya dapat menjelaskan value vs reference untuk struct.
- [ ] Saya dapat mengiterasi array of struct.
- [ ] Saya dapat menjelaskan perbedaan penyimpanan struct dan union.
- [ ] Saya dapat memakai `using` dan `enum class`.
- [ ] Challenge dikompilasi dengan `-Wall -Wextra` tanpa warning penting.

## Lanjut

Pertemuan 13 membahas Pengenalan Pemrograman Berorientasi Objek: class, object, encapsulation, inheritance, dan polymorphism dasar.

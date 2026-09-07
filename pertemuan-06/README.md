# DDP101 - Pertemuan 6
## Fungsi dan Parameter Passing

**Universitas Pertahanan Republik Indonesia**  
**Program Studi Informatika - FTTP**  
**Mata Kuliah:** Dasar-Dasar Pemrograman (DDP101)  
**Sub-CPMK 3.1:** menerapkan fungsi, parameter passing, dan return value dalam C++.

![Logo Unhan](assets/logo_unhan.png)

## Target belajar mandiri (45-60 menit)

Setelah sesi ini Anda diharapkan dapat:

1. membedakan **function declaration**, **definition**, dan **call**;
2. membedakan **parameter** dan **argument**;
3. menggunakan **return value** dan fungsi `void`;
4. menjelaskan perbedaan **pass by value** dan **pass by reference**;
5. menggunakan **function overloading**, **default arguments**, dan membaca `inline` secara tepat;
6. memecah program menjadi fungsi-fungsi kecil dengan tanggung jawab jelas.

## Model mental

```text
CALLER --argument--> FUNCTION(parameter)
                     |  proses
                     v
CALLER <--return----- hasil
```

Untuk pass by value, parameter menerima **salinan**.  
Untuk pass by reference (`T&`), parameter menjadi **alias** ke objek caller.

## Struktur folder

```text
pertemuan-06-fungsi/
├── README.md
├── assets/
│   └── logo_unhan.png
├── examples/
│   ├── 01_fungsi_dasar.cpp
│   ├── 02_prototype.cpp
│   ├── 03_return_value.cpp
│   ├── 04_pass_by_value.cpp
│   ├── 05_pass_by_reference.cpp
│   ├── 06_overloading.cpp
│   ├── 07_default_argument.cpp
│   ├── 08_inline.cpp
│   ├── 09_modular_nilai.cpp
│   └── 10_demo_terpadu.cpp
└── challenge/
    ├── README.md
    └── starter.cpp
```

## Cara kompilasi

```bash
g++ -std=c++17 examples/01_fungsi_dasar.cpp -o latihan
./latihan
```

Pada Windows hasil kompilasi biasanya `latihan.exe`.

## Jalur belajar

1. Jalankan `01_fungsi_dasar.cpp` dan lihat bagaimana `main()` memanggil fungsi.
2. Buka `02_prototype.cpp` untuk melihat declaration sebelum `main()` dan definition sesudahnya.
3. Bandingkan `04_pass_by_value.cpp` dan `05_pass_by_reference.cpp`.
4. Uji overload pada `06_overloading.cpp`.
5. Uji call dengan dan tanpa argument opsional pada `07_default_argument.cpp`.
6. Baca `08_inline.cpp`: output tidak membuktikan apakah compiler benar-benar melakukan inlining.
7. Pelajari `09_modular_nilai.cpp` dan `10_demo_terpadu.cpp` sebagai contoh pemecahan tanggung jawab.

## Mini check

1. Apa beda parameter dan argument?
2. Mengapa `void` tidak menghasilkan nilai return?
3. Apa yang terjadi pada variabel caller ketika parameter pass by value diubah?
4. Apa arti `&` pada `int& x` sebagai parameter?
5. Bolehkah overloading hanya berbeda return type?
6. Apa manfaat default argument?
7. Apakah `inline` menjamin optimasi?

<details>
<summary>Jawaban</summary>

1. Parameter adalah variabel formal di fungsi; argument adalah nilai/ekspresi saat call.
2. `void` menyatakan tidak ada nilai yang dikembalikan.
3. Variabel caller tidak berubah karena fungsi memodifikasi salinan.
4. `x` menjadi reference/alias ke argument caller.
5. Tidak. Daftar parameter harus membedakan overload secara memadai.
6. Memungkinkan call lebih singkat untuk nilai yang memang memiliki default wajar.
7. Tidak. Compiler bebas melakukan atau tidak melakukan inlining.

</details>

## Error Lab

Coba kompilasi:

```cpp
int main() {
    cout << kuadrat(5) << "\n";
}

int kuadrat(int x) {
    return x * x;
}
```

Apa masalahnya? Perbaiki dengan **prototype** atau pindahkan definition sebelum `main()`.

## Challenge

Buka `challenge/README.md`. Buat program modular tanpa array, recursion, template, struct, pointer eksplisit, atau class.

## Preview Pertemuan 7

Rekursi, scope dan lifetime, function templates, lambda expressions, fungsi sebagai parameter, serta debugging dengan breakpoint, step execution, watch variables, dan call stack.

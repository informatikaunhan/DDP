# DDP101 - Pertemuan 13: Pengenalan Pemrograman Berorientasi Objek

Program Studi Informatika - Universitas Pertahanan Republik Indonesia  
C++17 | CPMK 5 | Sub-CPMK 5.2

![Logo Unhan](assets/logo_unhan.png)

## Capaian belajar

Setelah sesi mandiri ini Anda diharapkan dapat:

1. menjelaskan perbedaan pendekatan procedural dan object-oriented;
2. membuat `class`, object, data member, dan member function;
3. menerapkan `private`, `public`, dan `protected` secara sadar;
4. memakai constructor/destructor sederhana;
5. menjaga invariant melalui encapsulation;
6. menerapkan single inheritance dan runtime polymorphism dasar dengan `virtual` + `override`.

> Batas materi: tidak membahas operator overloading, friend, multiple inheritance, abstract class/pure virtual, RTTI, atau virtual function secara mendalam.

## Jalur belajar mandiri 60 menit

### 0-10 menit - Model mental

Baca konsep berikut:

- **Class** = definisi/kontrak.
- **Object** = instance konkret dari class.
- **State** = data member.
- **Behavior** = member function.
- **Encapsulation** = state dan aturan akses berada dalam satu batas class.
- **Inheritance** = derived class mengkhususkan base class pada relasi *is-a*.
- **Polymorphism** = interface base yang sama dapat menjalankan behavior derived yang berbeda.
- **Abstraction** = caller melihat *apa* yang dapat dilakukan, bukan semua detail *bagaimana* implementasinya.

### 10-25 menit - Jalankan contoh 01-04

```bash
g++ -std=c++17 -Wall -Wextra examples/01_class_object.cpp -o app
./app
```

Ulangi untuk:

- `02_constructor.cpp`
- `03_encapsulation.cpp`
- `04_destructor_trace.cpp`

Pertanyaan: mengapa `private` bukan sekadar "mempersulit akses data"?

### 25-40 menit - Inheritance dan polymorphism

Jalankan:

- `05_inheritance.cpp`
- `06_constructor_inheritance.cpp`
- `07_overriding.cpp`
- `08_virtual_polymorphism.cpp`

Eksperimen penting pada `08_virtual_polymorphism.cpp`: hapus sementara kata `virtual`, kompilasi ulang, dan bandingkan output. Setelah itu kembalikan kode ke kondisi awal.

### 40-50 menit - Aplikasi kecil

Jalankan:

- `09_library_book.cpp`
- `10_demo_terpadu.cpp`

Identifikasi untuk setiap program: state apa yang private, public interface apa yang tersedia, dan invariant apa yang dijaga.

### 50-60 menit - Challenge

Buka `challenge/starter_kendaraan.cpp` dan lengkapi TODO. Gunakan `challenge/TEST_CASES.md` sebagai minimal test plan.

## Mini-check

1. Apakah class dan object sama?
2. Mengapa constructor tidak memiliki return type?
3. Kapan `protected` dapat diakses?
4. Apa arti `class Mobil : public Kendaraan`?
5. Apa manfaat `override`?
6. Mengapa polymorphism contoh kita memerlukan `virtual` pada base?

<details>
<summary>Jawaban</summary>

1. Tidak. Class adalah definisi; object adalah instance.
2. Constructor adalah mekanisme khusus pembentukan object, bukan fungsi biasa yang mengembalikan nilai.
3. Dari class itu sendiri dan derived class, tetapi tidak dari caller luar.
4. Mobil adalah derived class dari Kendaraan dengan public inheritance.
5. Compiler memeriksa bahwa method benar-benar meng-override signature base.
6. Agar dynamic dispatch memilih implementasi sesuai tipe object aktual saat dipanggil melalui reference/pointer base.

</details>

## Error Lab

Coba lakukan eksperimen berikut satu per satu, baca pesan compiler, lalu pulihkan kode:

- akses field `private` langsung dari `main`;
- hilangkan argumen constructor base pada derived constructor;
- ubah `const` pada signature override sehingga tidak sama;
- hapus `virtual` dan amati perbedaan dispatch.

Catat: gejala, penyebab, dan perbaikan.

## Checklist selesai

- [ ] Semua 10 contoh berhasil dikompilasi.
- [ ] Saya dapat menjelaskan class vs object.
- [ ] Saya dapat menjelaskan public/private/protected.
- [ ] Saya dapat membuat constructor dengan initializer list.
- [ ] Saya dapat menjelaskan urutan constructor base -> derived.
- [ ] Saya dapat menunjukkan polymorphism melalui base reference/pointer.
- [ ] Challenge lolos minimal 6 test case.

## Lanjut

Pertemuan 14: **File Handling dan Exception Handling**.

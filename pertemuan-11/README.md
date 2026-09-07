# DDP101 - Pertemuan 11
## Pointer dan Memori Dinamis

**Program Studi Informatika - FTTP - Universitas Pertahanan Republik Indonesia**  
**Mata kuliah:** Dasar-Dasar Pemrograman (DDP101)  
**CPMK:** CPMK 3  
**Sub-CPMK:** 3.3

![Logo Unhan](assets/logo_unhan.png)

Pertemuan 8 adalah **UTS**. Setelah array 1D dan 2D pada Pertemuan 9-10, Pertemuan 11 membahas **alamat memori, pointer, dynamic memory, dan lifetime**.

## Target belajar

- memahami nilai, alamat, pointer, dan dereference;
- menggunakan `nullptr` secara aman;
- menghubungkan pointer dengan array;
- menggunakan pointer arithmetic tanpa keluar batas;
- memakai `new/delete` dan `new[]/delete[]` dengan pasangan yang benar;
- mengenali memory leak, dangling pointer, use-after-free, dan double delete;
- memahami node berantai sebagai aplikasi pointer.

## Peta konsep

```text
VARIABLE
  | address-of (&)
  v
ADDRESS ----stored in----> POINTER
                          |
                          | dereference (*)
                          v
                        OBJECT

ARRAY -> address of first element -> pointer arithmetic

new/new[] -> dynamic object(s) -> ownership/lifetime -> delete/delete[]
```

## Jalur belajar 45-60 menit

1. **10 menit** - jalankan contoh 01-03: alamat, dereference, nullptr.
2. **10 menit** - jalankan 04-05: pointer dan array.
3. **10 menit** - pelajari 06-07: `new/delete` dan dynamic array.
4. **10 menit** - baca Error Lab: leak/dangling/double delete.
5. **10 menit** - jalankan node berantai dan demo terpadu.
6. **5-10 menit** - mulai challenge.

## Aturan emas

```text
Dereference hanya pointer valid.
new T      <-> delete
new T[n]   <-> delete[]
Setelah delete: jangan gunakan objek lagi.
Ownership harus jelas.
```

## Daftar contoh

| File | Fokus |
|---|---|
| `01_alamat_pointer.cpp` | alamat dan dereference |
| `02_dereference_mutasi.cpp` | aliasing/mutasi |
| `03_nullptr_validasi.cpp` | null guard |
| `04_pointer_arithmetic_array.cpp` | pointer traversal |
| `05_array_pointer_function.cpp` | pointer sebagai parameter |
| `06_new_delete_scalar.cpp` | dynamic scalar |
| `07_dynamic_array.cpp` | dynamic array |
| `08_memory_leak_fixed.cpp` | cleanup benar |
| `09_simple_linked_nodes.cpp` | node berantai |
| `10_demo_terpadu.cpp` | dynamic array + fungsi |

## Mini-check

<details><summary>1. Apa beda `p` dan `*p`?</summary>
`p` adalah alamat yang disimpan pointer; `*p` adalah objek/nilai pada alamat tersebut.
</details>

<details><summary>2. Apa arti `int *p = nullptr;`?</summary>
Pointer dideklarasikan tetapi sengaja tidak menunjuk objek valid.
</details>

<details><summary>3. Apa pasangan `new int[n]`?</summary>
`delete[] p;`.
</details>

<details><summary>4. Apa itu dangling pointer?</summary>
Pointer yang masih menyimpan alamat objek yang lifetime-nya sudah berakhir.
</details>

<details><summary>5. Mengapa `a[i]` terkait dengan `*(a+i)`?</summary>
Dalam banyak ekspresi, array menghasilkan pointer ke elemen pertama; offset `i` memilih elemen ke-i.
</details>

## Error Lab

Analisis tanpa menjalankan dereference invalid:

```cpp
int *p = new int(7);
int *q = p;
delete p;
p = nullptr;
cout << *q; // apa masalahnya?
```

Pertanyaan: siapa owner? kapan lifetime objek berakhir? mengapa `q` menjadi dangling?

## Challenge - Rekap Nilai Dinamis

Gunakan `challenge/starter_rekap_nilai_dinamis.cpp`.

Program harus:

- membaca `N` pada rentang `1..100`;
- mengalokasikan `new int[N]`;
- memvalidasi setiap nilai `0..100`;
- menghitung total, rata-rata, minimum, maksimum;
- memakai minimal satu traversal berbasis pointer arithmetic;
- memiliki minimal 4 fungsi selain `main()`;
- melakukan `delete[]` tepat satu kali dan tidak mengakses data setelahnya.

### Test wajib

- `N=1`;
- nilai boundary `0` dan `100`;
- semua nilai sama;
- `N=0` dan `N=101` ditolak sebelum alokasi.

## Modern C++ note

Raw pointer dan `new/delete` dipelajari agar mekanisme memori terlihat. Dalam program nyata, `std::vector` dan RAII/smart pointer sering lebih aman karena ownership dan cleanup lebih otomatis.

## Checklist selesai

- [ ] Saya dapat menjelaskan `&x`, `p`, dan `*p`.
- [ ] Saya tidak dereference pointer sebelum validasi.
- [ ] Saya memahami hubungan array dan pointer.
- [ ] Saya tahu pasangan `new/delete` dan `new[]/delete[]`.
- [ ] Saya dapat menjelaskan memory leak dan dangling pointer.
- [ ] Saya dapat menjelaskan siapa owner dynamic object.

## Berikutnya

**Pertemuan 12: Struct, Union, dan Typedef** - tipe data bentukan, array of struct, nested struct, type alias, dan enum.

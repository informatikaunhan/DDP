# Dasar-Dasar Pemrograman (DDP101)

**Program Studi Informatika · Fakultas Teknik dan Teknologi Pertahanan · Universitas Pertahanan Republik Indonesia**

Repositori bahan belajar mandiri mata kuliah Dasar-Dasar Pemrograman. Materi menggunakan C++17, dengan Code::Blocks dan MinGW GCC sebagai lingkungan utama. Setiap pertemuan menyediakan penjelasan, contoh program, latihan, dan/atau challenge sesuai paket bahan ajar.

## Mulai belajar

Buka README pada folder pertemuan, baca tujuan pembelajaran, kemudian kerjakan contoh dan latihan secara berurutan. Pertemuan 8 adalah UTS; Pertemuan 16 adalah UAS.

| Pertemuan | Topik | Materi |
|---|---|---|
| 1 | 01 Pengenalan Pemrograman dan C++ | [Buka materi](pertemuan-01/README.md) |
| 2 | 02 Tipe Data Variabel dan Operator | [Buka materi](pertemuan-02/README.md) |
| 3 | 03 Input dan Output | [Buka materi](pertemuan-03/README.md) |
| 4 | 04 Struktur Kontrol - Percabangan | [Buka materi](pertemuan-04/README.md) |
| 5 | 05 Struktur Kontrol - Perulangan | [Buka materi](pertemuan-05/README.md) |
| 6 | 06 Fungsi dan Parameter Passing | [Buka materi](pertemuan-06/README.md) |
| 7 | 07 Fungsi Lanjutan Rekursi dan Debugging | [Buka materi](pertemuan-07/README.md) |
| 9 | 09 Array 1D dan Operasinya | [Buka materi](pertemuan-09/README.md) |
| 10 | 10 Array Multidimensi | [Buka materi](pertemuan-10/README.md) |
| 11 | 11 Pointer dan Memori Dinamis | [Buka materi](pertemuan-11/README.md) |
| 12 | 12 Struct Union dan Typedef | [Buka materi](pertemuan-12/README.md) |
| 13 | 13 Pengenalan Pemrograman Berorientasi Objek | [Buka materi](pertemuan-13/README.md) |
| 14 | 14 File Handling dan Exception Handling | [Buka materi](pertemuan-14/README.md) |
| 15 | 15 C++ di Platform Lain dan Development Tools | [Buka materi](pertemuan-15/README.md) |

## Menjalankan contoh

Gunakan Code::Blocks dengan compiler MinGW GCC atau compiler C++17 lain. Buka file `.cpp` dalam folder `examples/`, lalu build dan jalankan. Jika menggunakan terminal dengan GCC:

```bash
g++ -std=c++17 -Wall -Wextra pertemuan-01/examples/hello_world.cpp -o hello_world
```

Jalankan `hello_world` (atau `hello_world.exe` pada Windows). Untuk contoh lain, sesuaikan path dan nama executable. Beberapa pertemuan mempunyai dependency atau instruksi khusus; ikuti README masing-masing. Contoh embedded memerlukan toolchain board yang sesuai dan tidak dapat dikompilasi langsung sebagai program desktop biasa.

## Struktur repositori

```text
DDP/
├── README.md
├── .gitignore
├── LICENSE_NOTICE.md
├── pertemuan-01/
│   ├── README.md
│   ├── examples/
│   └── assets/
├── pertemuan-02/
├── ...
├── pertemuan-07/
├── pertemuan-09/
├── ...
└── pertemuan-15/
```

Materi mandiri diambil dari paket final DDP101 Pertemuan 01–15. Dokumen PDF cetak, slide, dan source DOCX tidak dimasukkan karena repositori ini khusus untuk belajar mandiri. Berkas asli di dalam tiap pertemuan dipertahankan, termasuk petunjuk lisensinya. Tidak ada kunci jawaban baru yang ditambahkan.

## Penggunaan dan atribusi

Materi digunakan untuk kegiatan pembelajaran. Perhatikan ketentuan pada `LICENSE_NOTICE.md` dan `LICENSE_NOTE.txt` apabila tersedia. Tidak ada lisensi perangkat lunak terbuka yang diberikan secara otomatis hanya karena repositori dapat diakses publik.

**Dosen pengampu:** Anindito  
**Tahun akademik:** 2026/2027

# Challenge - Rekap Kesiapan Latihan

Buat program C++17 yang:

1. meminta jumlah data `N` (`N > 0`);
2. menerima `N` skor pada rentang `0..100`;
3. jika skor tidak valid, minta ulang dengan `while` tanpa menambah nomor data;
4. menghitung rata-rata, minimum, maksimum, dan jumlah skor `>= 75`;
5. menampilkan maksimal 10 karakter `*` sebagai visual jumlah skor lulus;
6. menanyakan apakah seluruh proses akan diulang (`y/t`) dengan `do-while`.

## Batasan

Gunakan hanya materi Pertemuan 1-5. Jangan memakai `array`, `vector`, atau fungsi buatan sendiri.

## Uji minimum

- `N=1`, skor `75`.
- Skor salah: `-1`, `101`, lalu `80`.
- Semua skor di bawah `75`.
- Semua skor di atas atau sama dengan `75`.
- Jalankan proses dua kali dengan pilihan `y`, lalu keluar dengan `t`.

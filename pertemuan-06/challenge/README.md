# Challenge - Pos Kesiapan Modular

Buat program C++17 yang menerima dua skor latihan (`teori` dan `praktik`) dan memecah logika ke dalam fungsi.

## Syarat

- Skor valid pada `0..100`.
- Nilai akhir = `60% teori + 40% praktik`.
- Kategori: A >= 85, B >= 75, C >= 65, D >= 50, E < 50.
- Gunakan minimal satu fungsi dengan **return value**.
- Gunakan minimal satu fungsi dengan **pass by reference** yang memang mengubah caller.
- Gunakan minimal satu **default argument** atau **overload**.
- `main()` harus terutama berisi urutan pemanggilan fungsi.

## Uji minimum

- teori=100, praktik=100
- teori=0, praktik=0
- nilai akhir tepat di batas 85, 75, 65, atau 50 (buat data yang sesuai)
- input di luar rentang
- panggilan fungsi dengan default argument dihilangkan dan diberikan eksplisit

## Batasan

Gunakan konsep sampai Pertemuan 6 saja. Tidak perlu array, recursion, template, struct, pointer eksplisit, atau class.

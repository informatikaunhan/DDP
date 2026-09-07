# Test cases minimal

1. Semua 4 object tampil dan tipe aktualnya benar.
2. Cari `OPS-01` -> index 0.
3. Cari `OPS-04` -> index terakhir.
4. Cari ID yang tidak ada -> -1.
5. Ubah satu kendaraan menjadi nonaktif -> output status berubah.
6. Polymorphism: panggilan `tampilkan()` melalui `Kendaraan*` menjalankan override derived.
7. Tambahkan satu boundary test untuk `jumlahPintu` atau `kapasitasCC` sesuai aturan yang Anda tetapkan.

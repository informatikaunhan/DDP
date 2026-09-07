# Test cases minimal

1. File database belum ada, lalu Create satu record.
2. Nama kosong ditolak.
3. Nilai -1 dan 101 ditolak; 0 dan 100 diterima.
4. List beberapa record valid.
5. Search nama yang ada dan tidak ada.
6. Sisipkan satu baris malformed; program melaporkan/log error.
7. Update record yang ada dan yang tidak ada.
8. Delete record yang ada dan yang tidak ada.
9. File log tidak bisa dibuka -> fallback ke cerr.
10. Setelah recoverable error, menu tetap dapat digunakan.

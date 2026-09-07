# DDP101 - Pertemuan 7
## Fungsi Lanjutan, Rekursi, dan Debugging

**Program Studi Informatika - Fakultas Teknik dan Teknologi Pertahanan - Universitas Pertahanan RI**

Pertemuan ini menghubungkan konsep fungsi dari Pertemuan 6 dengan cara kerja **call stack** dan praktik **debugging**. Fokus: recursion, scope/lifetime, function templates, lambda, fungsi sebagai parameter, breakpoint, step, watch, dan call stack.

### Capaian
Setelah belajar, Anda diharapkan dapat:
- membuat fungsi rekursif dengan base case dan progress yang benar;
- menelusuri recursive call melalui call stack;
- membedakan scope dan lifetime;
- menulis function template sederhana;
- menggunakan lambda dasar;
- meneruskan fungsi sebagai parameter;
- melakukan debugging terstruktur menggunakan print statement atau debugger.

## Jalur belajar mandiri 60 menit

| Menit | Aktivitas |
|---|---|
| 0-10 | Baca model rekursi + jalankan `01_faktorial.cpp` |
| 10-20 | Jalankan `02_trace_rekursi.cpp` dan gambar call stack |
| 20-30 | Eksperimen scope/lifetime dan template |
| 30-40 | Eksperimen lambda dan fungsi sebagai parameter |
| 40-55 | Debug `08_bug_logika.cpp` dan `09_debug_rekursi.cpp` |
| 55-60 | Mini-check + catat satu hal yang masih membingungkan |

## 1. Rekursi
Rekursi = fungsi memanggil dirinya pada versi masalah yang lebih kecil.

```cpp
long long faktorial(int n) {
    if (n <= 1) return 1;          // base case
    return n * faktorial(n - 1);  // recursive case
}
```

Checklist rekursi:
1. Apa base case?
2. Apa yang berubah pada recursive call?
3. Apakah perubahan itu selalu menuju base case?
4. Apa nilai yang dikembalikan saat proses unwind?

## 2. Call stack
Untuk `faktorial(4)`:

```text
f(4) menunggu 4 * f(3)
  f(3) menunggu 3 * f(2)
    f(2) menunggu 2 * f(1)
      f(1) -> 1
    f(2) -> 2
  f(3) -> 6
f(4) -> 24
```

Debugger menampilkan frame-frame aktif melalui **Call Stack** atau `backtrace` di GDB.

## 3. Scope vs lifetime
- **Scope**: di mana nama dapat digunakan.
- **Lifetime**: berapa lama objek hidup.
- Local biasa dibuat ulang pada call baru.
- `static` local mempertahankan state antar-call.

## 4. Function template

```cpp
template <typename T>
T terbesar(T a, T b) {
    return (a > b) ? a : b;
}
```

Template generik, tetapi body tetap harus valid untuk tipe `T`.

## 5. Lambda

```cpp
int batas = 75;
auto lulus = [batas](double nilai) {
    return nilai >= batas;
};
```

`[batas]` menangkap nilai; `[&batas]` menangkap referensi.

## 6. Fungsi sebagai parameter

```cpp
int terapkan(int x, int (*op)(int)) {
    return op(x);
}
```

Ini memisahkan **data** (`x`) dari **perilaku** (`op`).

## 7. Debugging workflow

```text
REPRODUCE -> MINIMIZE -> OBSERVE -> HYPOTHESIZE -> FIX -> RETEST
```

Fitur debugger:
- Breakpoint: berhenti di baris tertentu.
- Step Into: masuk ke fungsi.
- Step Over: jalankan baris tanpa masuk ke call.
- Step Out/Finish: keluar dari frame aktif.
- Watch/Print: lihat nilai variabel.
- Call Stack/Backtrace: lihat rantai caller.

### GDB singkat

```bash
g++ -std=c++17 -g examples/09_debug_rekursi.cpp -o debug_rekursi
gdb ./debug_rekursi
```

Di GDB:

```text
break faktorialBug
run
display n
step
backtrace
finish
quit
```

## Error Lab
Jalankan `08_bug_logika.cpp` dan `09_debug_rekursi.cpp`. Kedua program **dapat dikompilasi** tetapi mengandung logical error. Jangan langsung membuka jawabannya.

<details>
<summary>Petunjuk bug batas kelulusan</summary>

Uji tepat di batas 75. Perhatikan operator pembanding.
</details>

<details>
<summary>Petunjuk bug faktorial</summary>

Telusuri sampai base case. Nilai apa yang seharusnya dikembalikan oleh 0!?
</details>

## Mini-check
1. Apa dua syarat utama rekursi yang aman?
2. Scope dan lifetime sama atau berbeda?
3. Apa tujuan `template <typename T>`?
4. Apa arti `[&batas]` pada lambda?
5. Kapan Step Into lebih berguna daripada Step Over?
6. Apa informasi utama yang diberikan Call Stack?

<details>
<summary>Jawaban</summary>

1. Base case yang dapat dicapai dan progress menuju base case.
2. Berbeda: scope = keterlihatan nama; lifetime = umur objek.
3. Mendefinisikan parameter tipe agar satu pola fungsi dapat diinstansiasi untuk tipe berbeda.
4. Lambda menangkap `batas` dengan referensi.
5. Saat perlu melihat eksekusi di dalam fungsi yang dipanggil.
6. Rangkaian frame/function call aktif beserta urutan caller.
</details>

## Challenge
Buka `challenge/README.md` dan lengkapi `challenge/starter.cpp`.

## Build

```bash
g++ -std=c++17 examples/01_faktorial.cpp -o faktorial
./faktorial
```

Di Windows MinGW:

```powershell
g++ -std=c++17 examples\01_faktorial.cpp -o faktorial.exe
.\faktorial.exe
```

---
DDP101 | Pertemuan 7 | Prodi Informatika FTTP - Unhan RI

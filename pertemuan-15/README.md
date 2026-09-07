# DDP101 - Pertemuan 15: C++ di Platform Lain dan Development Tools

**Program Studi Informatika - Universitas Pertahanan Republik Indonesia**  
**CPMK 1, CPMK 4 | Sub-CPMK 1.3, 4.1 | C++17**

Pertemuan ini mengubah sudut pandang dari **"menulis program C++"** menjadi **"membangun, menguji, dan memindahkan program C++ di ekosistem nyata"**.

## Target belajar

Setelah belajar mandiri, Anda mampu:
1. menjelaskan peran C++ pada embedded, competitive programming, game, dan cross-platform development;
2. membaca/memodifikasi sketch Arduino/ESP32 sederhana;
3. menggunakan fast I/O dan pola sort/search untuk online judge;
4. menjelaskan game loop;
5. membangun project sederhana dengan CMake;
6. menggunakan debugger, sanitizer/memory tool, dan static analysis secara dasar;
7. memakai Git untuk histori perubahan;
8. mereview integrasi materi Pertemuan 9-14 menjelang UAS.

## Jalur belajar 60-75 menit

- **0-10 menit:** `01_platform_macros.cpp` dan `02_compiler_info.cpp`.
- **10-20 menit:** baca `embedded/arduino_blink.ino` dan `embedded/esp32_sensor_serial.ino`.
- **20-30 menit:** `03_fast_io.cpp` + `04_sort_search.cpp`.
- **30-40 menit:** `05_game_loop_console.cpp`.
- **40-50 menit:** folder `cmake_demo/`.
- **50-60 menit:** `06_debug_assert.cpp` dan `07_memory_bug_fixed.cpp`; coba debugger/sanitizer.
- **60-75 menit:** `09_uas_review_integrated.cpp` + challenge.

## Kompilasi desktop

```bash
g++ -std=c++17 -Wall -Wextra -g examples/01_platform_macros.cpp -o app
./app
```

Diagnostic build bila didukung GCC/Clang:

```bash
g++ -std=c++17 -Wall -Wextra -g -fsanitize=address,undefined examples/07_memory_bug_fixed.cpp -o app
```

## CMake

```bash
cmake -S cmake_demo -B build
cmake --build build
```

## Embedded

File `.ino` memerlukan Arduino-compatible toolchain. Tanpa board, lakukan code review dan jelaskan alur `setup()` / `loop()` / Serial debugging.

## Competitive programming checklist

- tidak ada prompt tambahan;
- baca constraints;
- tentukan complexity;
- gunakan test kecil + boundary;
- cek overflow dan indeks;
- baru optimalkan I/O bila perlu.

## Debugging workflow

```text
reproduce -> isolate -> inspect -> hypothesis -> fix -> regression test
                |          |
                |          +-- watch/call stack
                +-- breakpoint / sanitizer / analyzer
```

## Git workflow minimal

```bash
git init
git add .
git commit -m "P15 baseline"
git diff
git log --oneline
```

## Challenge

Buka `challenge/starter_readiness_toolkit.cpp` dan lengkapi **Cross-Platform Readiness Toolkit**. Lihat `TEST_CASES.md` dan `REQUIREMENTS.md`.

> Prinsip: **portable code adalah code yang asumsi platform-nya terlihat, dibatasi, dan dapat diuji.**

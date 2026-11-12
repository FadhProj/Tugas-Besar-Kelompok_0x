#include "interface.h"

void menu(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu utama ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Fitur umum                              ||"<< endl;
    cout<< "|| 2. Fitur Khusus                            ||"<< endl;
    cout<< "|| 3. Fitur Bonus                             ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. exit                                    ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini



            // =================================
            menuFiturUmum(LM,LMK,T);
            break;
        case 2:
            // tambahkan codemu disini



            // =================================
            menuFiturKhusus(LM,LMK,T);
            break;
        case 3:
            // tambahkan codemu disini



            // =================================
            menuFiturBonus(LM,LMK,T);
            break;
            case 0:
        break;
      default:
        menu(LM,LMK,T);
    }
}

void menuFiturUmum(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu fitur umum ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||                  Fitur Umum                ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Mahasiswa                               ||"<< endl;
    cout<< "|| 2. Matakuliah                              ||"<< endl;
    cout<< "|| 3. Kartu Rencana Studi                     ||"<< endl;
    cout<< "|| 4. Nilai                                   ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 2:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 3:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 4:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 0:
            menu(LM,LMK,T);
            break;
      default:
        menuFiturUmum(LM,LMK,T);
    }
}

void menuFiturUmumKRS(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu KRS ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||        Fitur Umum Kartu Rencana Studi      ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Tambah Kartu Rencana Studi (first)      ||"<< endl;
    cout<< "|| 2. Tambah Kartu Rencana Studi (after)      ||"<< endl;
    cout<< "|| 3. Tambah Kartu Rencana Studi (last)       ||"<< endl;
    cout<< "|| 4. Hapus Kartu Rencana Studi (first)       ||"<< endl;
    cout<< "|| 5. Hapus Kartu Rencana Studi (after)       ||"<< endl;
    cout<< "|| 6. Hapus Kartu Rencana Studi (last)        ||"<< endl;
    cout<< "|| 7. Cari Kartu Rencana Studi (NIM)          ||"<< endl;
    cout<< "|| 8. Tampilkan Seluruh Kartu Rencana Studi   ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 2:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 3:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 4:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 5:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 6:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 7:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 8:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumKRS(LM,LMK,T);
            break;
        case 0:
            menuFiturUmum(LM,LMK,T);
            break;
      default:
        menuFiturUmumKRS(LM,LMK,T);
    }
}

void menuFiturUmumMahasiswa(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu mahasiswa ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||        Fitur Umum Mahasiswa                ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Tambah Mahasiswa (first)                ||"<< endl;
    cout<< "|| 2. Tambah Mahasiswa (after)                ||"<< endl;
    cout<< "|| 3. Tambah Mahasiswa (last)                 ||"<< endl;
    cout<< "|| 4. Hapus Mahasiswa (first)                 ||"<< endl;
    cout<< "|| 5. Hapus Mahasiswa (after)                 ||"<< endl;
    cout<< "|| 6. Hapus Mahasiswa (last)                  ||"<< endl;
    cout<< "|| 7. Cari Mahasiswa (NIM)                    ||"<< endl;
    cout<< "|| 8. Tampilkan Seluruh data Mahasiswa        ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 2:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 3:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 4:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 5:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 6:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 7:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 8:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMahasiswa(LM,LMK,T);
            break;
        case 0:
            menuFiturUmum(LM,LMK,T);
            break;
      default:
        menuFiturUmumMahasiswa(LM,LMK,T);
    }
}

void menuFiturUmumMatakuliah(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu mata kuliah ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||        Fitur Umum Matakuliah               ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Tambah Matakuliah (first)               ||"<< endl;
    cout<< "|| 2. Tambah Matakuliah (after)               ||"<< endl;
    cout<< "|| 3. Tambah Matakuliah (last)                ||"<< endl;
    cout<< "|| 4. Hapus Matakuliah (first)                ||"<< endl;
    cout<< "|| 5. Hapus Matakuliah (after)                ||"<< endl;
    cout<< "|| 6. Hapus Matakuliah (last)                 ||"<< endl;
    cout<< "|| 7. Cari Matakuliah (Kode MK)               ||"<< endl;
    cout<< "|| 8. Tampilkan Seluruh data Matakuliah       ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 2:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 3:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 4:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 5:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 6:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 7:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 8:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumMatakuliah(LM,LMK,T);
            break;
        case 0:
            menuFiturUmum(LM,LMK,T);
            break;
      default:
        menuFiturUmumMatakuliah(LM,LMK,T);
    }
}

void menuFiturUmumNilai(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu nilai ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||        Fitur Umum Nilai (BST)              ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Tambah Nilai                            ||"<< endl;
    cout<< "|| 2. Hapus Nilai                             ||"<< endl;
    cout<< "|| 3. Cari Nilai (NIM + Kode MK)              ||"<< endl;
    cout<< "|| 4. Tampilkan Secara Traversal (in-order)   ||"<< endl;
    cout<< "|| 5. Tampilkan Secara Traversal (pre-order)  ||"<< endl;
    cout<< "|| 6. Tampilkan Secara Traversal (post-order) ||"<< endl;
    cout<< "|| 7. Tampilkan grade minimum, grade maksimum ||"<< endl;
    cout<< "||    tinggi pohon, dan jumlah node           ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 2:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 3:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 4:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 5:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 6:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 7:
            // tambahkan codemu disini



            // =================================
            menuFiturUmumNilai(LM,LMK,T);
            break;
        case 0:
            menuFiturUmum(LM,LMK,T);
            break;
      default:
        menuFiturUmumNilai(LM,LMK,T);
    }
}

void menuFiturKhusus(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu fitur khusus ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||                 Fitur Khusus               ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Melakukan pengisian nilai mahasiswa     ||"<< endl;
    cout<< "||    dengan memilih mahasiswa dan matakuliah ||"<< endl;
    cout<< "||    tersedia.                               ||"<< endl;
    cout<< "|| 2. Menyimpan nilai mahasiswa ke BST        ||"<< endl;
    cout<< "||    berdasarkan nomor resi (unik dan acak)  ||"<< endl;
    cout<< "|| 3. Menampilkan Kartu Hasil Studi (KHS)     ||"<< endl;
    cout<< "||    mahasiswa berdasarkan semester tertentu ||"<< endl;
    cout<< "||    dengan menampilkan daftar mata kuliah   ||"<< endl;
    cout<< "||    beserta nilai yang diperoleh.           ||"<< endl;
    cout<< "|| 4. Menghitung Indeks Prestasi Semester(IPS)||"<< endl;
    cout<< "||    mahasiswa berdasarkan nilai mata kuliah ||"<< endl;
    cout<< "||    dan jumlah SKS yang diambil pada        ||"<< endl;
    cout<< "||    semester tersebut.                      ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini

            break;
        case 2:
            // tambahkan codemu disini

            break;
        case 3:
            // tambahkan codemu disini

            break;
        case 4:
            // tambahkan codemu disini

            break;
        case 0:
            menu(LM,LMK,T);
            break;
      default:
        menuFiturKhusus(LM,LMK,T);
    }
}

void menuFiturBonus(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T)
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu fitur bonus ditampilkan dan pilihan pengguna diproses */
{
    system("cls");
    int pilih;
    cout<< "================================================"<< endl;
    cout<< "||      Sistem Informasi Akademik (SIAKAD)    ||"<< endl;
    cout<< "||                 Fitur Bonus                ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 1. Menampilkan mahasiswa dengan IPS        ||"<< endl;
    cout<< "||    tertinggi pada suatu semester.          ||"<< endl;
    cout<< "|| 2. Menampilkan mata kuliah dengan          ||"<< endl;
    cout<< "||    jumlah mahasiswa terbanyak.             ||"<< endl;
    cout<< "|| 3. Menampilkan transkrip nilai `           ||"<< endl;
    cout<< "||    mahasiswa dari seluruh semester.        ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "|| 0. Kembali                                 ||"<< endl;
    cout<< "================================================"<< endl;
    cout<< "Pilih : "; cin>>pilih;
    switch(pilih) {
        case 1:
            // tambahkan codemu disini

            break;
        case 2:
            // tambahkan codemu disini

            break;
        case 3:
            // tambahkan codemu disini

            break;
        case 0:
            menu(LM,LMK,T);
            break;
      default:
        menuFiturBonus(LM,LMK,T);
    }
}

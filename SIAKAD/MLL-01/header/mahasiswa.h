#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include "krs.h"
#include <string>
#include <iostream>

using namespace std;

struct ------------
{
    ------------
};

typedef ------------ ------------;         // variabel alias untuk infor
typedef  struct ------------ *------------;   // variabel alias untuk pointer

// kerangka dari elemen list
struct ------------
{
    ------------
};

// kerangka dari list
struct ------------
{
    ------------
};

// pengecekan apakah list kosong
------------;
/* I.S. list LM terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

------------;
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
------------;
/* I.S. info mahasiswa x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan prev/next NULL
        dan daftar KRS dalam keadaan kosong */

------------;
/* I.S. pointer P terdefinisi
   F.S. elemen mahasiswa dan seluruh elemen KRS relasinya di-dealokasi;
        elemen mata kuliah yang dirujuk tidak ikut dihapus */

// pencarian sebuah elemen list
------------;
/* I.S. list LM dan NIM terdefinisi
   F.S. mengembalikan alamat elemen mahasiswa yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
------------;
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

------------;
/* I.S. terdefinisi list LM yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

------------;
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
------------;
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

------------;
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

------------;
/* I.S. terdefinisi list LM yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

------------;
/* I.S. terdefinisi list LM yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

------------;
/* I.S. terdefinisi list mahasiswa dan alamat mata kuliah
        F.S. true jika mata kuliah masih direferensikan oleh KRS mahasiswa */

------------;
/* I.S. ~
   F.S. meminta data mahasisswa dari user */

#endif // MAHASISWA_H_INCLUDED

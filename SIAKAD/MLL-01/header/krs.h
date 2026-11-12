#ifndef KRS_H_INCLUDED
#define KRS_H_INCLUDED
#include "matakuliah.h"
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
struct ListKRS
{
    ------------
};

// pengecekan apakah list kosong
------------;
/* I.S. list LK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
------------;
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
------------;
/* I.S. info KRS x dan alamat mata kuliah terdefinisi
   F.S. mengembalikan alamat elemen KRS berisi x, next NULL, dan menunjuk pMatakuliah */

------------;
/* I.S. pointer P terdefinisi
   F.S. elemen KRS di-dealokasi; elemen mata kuliah yang ditunjuk tidak ikut dihapus */

// pencarian sebuah elemen list
------------;
/* I.S. list LK milik mahasiswa dan ID KRS terdefinisi
   F.S. mengembalikan alamat elemen KRS yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
------------;
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

------------;
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

------------;
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
------------;
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

------------;
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

------------;
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

------------;
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

------------;
/* I.S. ~
        F.S. meminta data KRS dari user */

#endif // KRS_H_INCLUDED

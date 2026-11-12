#ifndef NILAIBST_H_INCLUDED
#define NILAIBST_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct NilaiAkademik
{
    ------------
};

typedef ------------ ------------; // variabel alias untuk infor
typedef  struct ------------ *------------;   // variabel alias untuk pointer

// kerangka dari elemen node
struct nodeNilai
{
    ------------
};

// kerangka dari BST
struct BST
{
    ------------
};

------------;
/* I.S. grade terdefinisi
   F.S. mengembalikan urutan grade T < E < D < C < BC < B < AB < A,
        atau -1 jika grade tidak dikenal */

------------;
/* I.S. record left dan right terdefinisi dengan grade yang dikenal
   F.S. true jika record left berada sebelum record right sesuai urutan BST */

------------;
/* I.S. komponen tugas, kuis, UTS, dan UAS terdefinisi
   F.S. nilai akhir dibulatkan dari 15% tugas + 15% kuis + 35% UTS + 35% UAS;
        grade T digunakan jika hasil berbobot di luar 0 sampai 100 */

// pengecekan apakah BST kosong
------------;
/* I.S. BST T terdefinisi
   F.S. true jika BST kosong dan false jika tidak kosong */

// pembuatan BST kosong
------------;
/* I.S. ~
   F.S. terbentuk BST kosong */

// manajemen memori
------------;
/* I.S. info x terdefinisi
   F.S. mengembalikan alamat node berisi x dengan anak kiri dan kanan NULL */

------------;
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen node
------------;
/* I.S. BST T dan identitas mahasiswa, mata kuliah, serta periode terdefinisi
   F.S. mengembalikan alamat node yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
------------;
/* I.S. terdefinisi BST T yang mungkin kosong dan elemen node P
   F.S. menempatkan elemen beralamat P menurut T < E < D < C < BC < B < AB < A,
        lalu NIM, kode MK, semester, dan tahun akademik sebagai tie-breaker */

// penghapusan node yang sudah diketahui alamatnya
------------;
/* I.S. terdefinisi BST T yang mungkin kosong dan elemen node P
   F.S. P adalah alamat dari alamat elemen yang akan dihapus.
        elemen lain menggantikan posisi elemen P yang dihapus
        sesuai aturan BST*/

------------;
/* I.S. terdefinisi BST T dan identitas record nilai
   F.S. record yang cocok dihapus jika ditemukan */

------------;
/* I.S. terdefinisi BST T
   F.S. seluruh record ditampilkan dengan traversal in-order */

------------;
/* I.S. terdefinisi BST T
   F.S. seluruh record ditampilkan dengan traversal pre-order */

------------;
/* I.S. terdefinisi BST T
   F.S. seluruh record ditampilkan dengan traversal post-order */

------------;
/* I.S. terdefinisi BST T
   F.S. mengembalikan node dengan grade minimum atau NULL jika BST kosong */

------------;
/* I.S. terdefinisi BST T
   F.S. mengembalikan node dengan grade maksimum atau NULL jika BST kosong */

------------;
/* I.S. terdefinisi BST T
   F.S. mengembalikan tinggi BST; tinggi pohon kosong adalah 0 */

------------;
/* I.S. terdefinisi BST T
   F.S. mengembalikan jumlah node dalam BST */

------------;
/* I.S. ~
   F.S. meminta data nilai akademik dari user */


#endif // NILAIBST_H_INCLUDED

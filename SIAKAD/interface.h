#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include "MLL-01/header/krs.h"
#include "MLL-01/header/mahasiswa.h"
#include "BST/header/nilaiBST.h"

void menu(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu utama ditampilkan dan pilihan pengguna diproses */

void menuFiturUmum(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu fitur umum ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumKRS(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu KRS ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumMahasiswa(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu mahasiswa ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumMatakuliah(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu mata kuliah ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumNilai(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu nilai ditampilkan dan pilihan pengguna diproses */

void menuFiturKhusus(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu fitur khusus ditampilkan dan pilihan pengguna diproses */

void menuFiturBonus(ListMahasiswa &LM, ListMatakuliah &LMK, BST &T);
/* I.S. list mahasiswa, list mata kuliah, dan BST terdefinisi
   F.S. menu fitur bonus ditampilkan dan pilihan pengguna diproses */

#endif // INTERFACE_H_INCLUDED

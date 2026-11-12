#ifndef DUMMY_H_INCLUDED
#define DUMMY_H_INCLUDED
#include "MLL-01/header/krs.h"
#include "MLL-01/header/mahasiswa.h"
#include "BST/header/nilaiBST.h"

void dummyMahasiswa(ListMahasiswa &LM);
/* I.S. LM terdefinisi dan kosong
   F.S. LM berisi minimal 5 data mahasiswa */

void dummyMatakuliah(ListMatakuliah &LMK);
/* I.S. LMK terdefinisi dan kosong
   F.S. LMK berisi minimal 5 data mata kuliah */

void dummyKRS(ListMahasiswa &LM, ListMatakuliah &LMK);
/* I.S. LM berisi 5 mahasiswa dan LMK berisi 5 mata kuliah
   F.S. daftar KRS pada elemen mahasiswa berisi minimal 10 relasi ke mata kuliah */

void dummyNilai(BST &T);
/* I.S. T terdefinisi dan kosong
   F.S. T berisi minimal 10 data nilai akademik */

#endif // DUMMY_H_INCLUDED

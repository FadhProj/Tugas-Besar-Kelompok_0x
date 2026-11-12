#include <iostream>
#include "interface.h"
#include "dummy.h"

using namespace std;

int main()
/* I.S. program mulai dijalankan
   F.S. data dummy dimuat dan menu utama dijalankan */
{
    ListMahasiswa LM = {};
    ListMatakuliah LMK = {};
    BST T = {};

    CreateList(LM);
    CreateList(LMK);
    CreateBST(T);

    dummyMahasiswa(LM);
    dummyMatakuliah(LMK);
    dummyKRS(LM, LMK);
    dummyNilai(T);

    menu(LM, LMK, T);
}

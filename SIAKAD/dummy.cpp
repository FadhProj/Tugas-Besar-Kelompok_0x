#include "dummy.h"

namespace
{
    void appendKRS(ListMahasiswa &LM, ListMatakuliah &LMK, const string &nim, const string &kodeMK, const string &id, int semester, int tahunAkademik, const string &kelas)
    /* I.S. mahasiswa dengan NIM dan mata kuliah dengan kode MK tersedia
       F.S. elemen KRS baru ditambahkan ke daftar KRS mahasiswa dan terhubung ke mata kuliah */
    {
        addressM parent = findElm(LM, nim);
        addressMK child = findElm(LMK, kodeMK);
        infotypeK info = {id, kelas, "Aktif", semester, tahunAkademik};
        addressK node = createElemen(info, child);
        insertLast(parent->LK, node);
    }

    NilaiAkademik makeNilai(int id, const string &nim, const string &kodeMK, int tugas, int kuis, int uts, int uas)
    /* I.S. identitas nilai dan seluruh komponen nilai terdefinisi
       F.S. mengembalikan data nilai akademik dengan nilai akhir dan grade hasil perhitungan */
    {
        NilaiAkademik info;
        info.idNilai = id;
        info.nim = nim;
        info.kodeMK = kodeMK;
        info.semester = 7;
        info.tahunAkademik = 2026;
        info.nilaiTugas = tugas;
        info.nilaiKuis = kuis;
        info.nilaiUTS = uts;
        info.nilaiUAS = uas;
        hitungNilaiAkhir(info);
        return info;
    }
}

void dummyMahasiswa(ListMahasiswa &LM)
/* I.S. LM terdefinisi dan kosong
   F.S. LM berisi 5 mahasiswa dengan relasi DLL */
{
    const infotypeM data[] = {
        {"Andi Saputra", "231001", "Informatika", 2023},
        {"Budi Santoso", "231002", "Informatika", 2023},
        {"Citra Lestari", "231003", "Sistem Informasi", 2023},
        {"Dinda Putri", "231004", "Informatika", 2023},
        {"Eko Pratama", "231005", "Sistem Informasi", 2023}
    };

    for (unsigned int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        addressM node = createElemen(data[i]);
        insertLast(LM, node);
    }
}

void dummyMatakuliah(ListMatakuliah &LMK)
/* I.S. LMK terdefinisi dan kosong
   F.S. LMK berisi 5 mata kuliah dalam SLL */
{
    const infotypeMK data[] = {
        {"Algoritma dan Pemrograman", "IF101", 3, 1},
        {"Struktur Data", "IF102", 3, 2},
        {"Basis Data", "IF103", 3, 3},
        {"Pemrograman Berorientasi Objek", "IF104", 3, 3},
        {"Jaringan Komputer", "IF105", 3, 4}
    };

    for (unsigned int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        addressMK node = createElemen(data[i]);
        insertLast(LMK, node);
    }
}

void dummyKRS(ListMahasiswa &LM, ListMatakuliah &LMK)
/* I.S. LM berisi 5 mahasiswa dan LMK berisi 5 mata kuliah
   F.S. KRS mahasiswa terhubung ke mata kuliah; total 10 relasi */
{
    addressM parent = LM.first;
    while (parent != NULL) {
        CreateList(parent->LK);
        parent = parent->next;
    }

    appendKRS(LM, LMK, "231001", "IF101", "KRS001", 7, 2026, "A");
    appendKRS(LM, LMK, "231001", "IF103", "KRS002", 7, 2026, "A");
    appendKRS(LM, LMK, "231002", "IF102", "KRS003", 7, 2026, "B");
    appendKRS(LM, LMK, "231002", "IF103", "KRS004", 7, 2026, "B");
    appendKRS(LM, LMK, "231003", "IF101", "KRS005", 7, 2026, "A");
    appendKRS(LM, LMK, "231003", "IF104", "KRS006", 7, 2026, "A");
    appendKRS(LM, LMK, "231004", "IF105", "KRS007", 7, 2026, "C");
    appendKRS(LM, LMK, "231005", "IF102", "KRS008", 7, 2026, "B");
    appendKRS(LM, LMK, "231004", "IF101", "KRS009", 7, 2026, "C");
    appendKRS(LM, LMK, "231005", "IF103", "KRS010", 7, 2026, "B");
}

void dummyNilai(BST &T)
/* I.S. T terdefinisi dan kosong
   F.S. T berisi 10 data nilai akademik */
{
    const NilaiAkademik data[] = {
        makeNilai(50, "231001", "IF101", 85, 80, 82, 88),
        makeNilai(30, "231001", "IF103", 80, 75, 78, 82),
        makeNilai(70, "231002", "IF102", 90, 85, 88, 92),
        makeNilai(20, "231002", "IF103", 75, 78, 72, 80),
        makeNilai(40, "231003", "IF101", 88, 90, 85, 87),
        makeNilai(60, "231003", "IF104", 82, 80, 84, 86),
        makeNilai(80, "231004", "IF105", 70, 75, 72, 78),
        makeNilai(35, "231005", "IF102", 85, 82, 80, 84),
        makeNilai(85, "231004", "IF101", 90, 88, 92, 94),
        makeNilai(90, "231005", "IF103", 68, 70, 72, 74)
    };

    for (unsigned int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        addressN node = createElemen(data[i]);
        insertNode(T, node);
    }
}

# Sistem Informasi Akademik (SIAKAD)

## Deskripsi
Aplikasi sistem informasi akademik mengelola data mahasiswa dan mata kuliah yang ditawarkan oleh program studi. Seorang mahasiswa dapat mengambil beberapa mata kuliah dan satu mata kuliah dapat diambil oleh banyak mahasiswa. Setiap pengambilan mata kuliah dicatat dalam Kartu Rencana Studi (KRS). Mahasiswa memperoleh nilai berdasarkan mata kuliah yang diambil. Data hubungan mahasiswa dan mata kuliah dikelola melalui Multi Linked List, sedangkan nilai akademik mahasiswa dicatat dalam Binary Search Tree.

---

## Struktur Data

| List | Deskripsi |
|----------|--------|
| Mahasiswa | Mahasiswa (NIM, nama, prodi, angkatan) |
| Matakuliah | Mata Kuliah (kode MK, nama mata kuliah, SKS, semester) |
| krs | KRS (id KRS, semester pengambilan, tahun akademik, kelas, status KRS) |
| Binary Search Tree | Nilai Akademik dengan key id nilai (NIM, kode MK, semester, tahun akademik, nilai tugas, nilai kuis, nilai UTS, nilai UAS, nilai akhir, nilai huruf) |

---

## Arsitektur
Arsitektur pada topik tugas besar ini menggunakan multi linked list tipe-01 dan binary search tree
1. Multi Linked List Tipe-01
![Images](https://drive.google.com/uc?id=1hln2Z-I5bJfjTzpheX_SzKbLXqx4AxuD)

2. Binary Search Tree
![Images](https://drive.google.com/uc?id=19yMrDmMPRJfd43G9AkvapAyENrzCLZND)

---

## Fitur / Fungsional Program
### Fungsional Umum
Fungsionalitas yang harus terpenuhi untuk **Multi-Linked list** adalah 
1. Menyisipkan elemen Mahasiswa, Matakuliah dan KRS (first, last, after)
2. Menghapus elemen Mahasiswa, Matakuliah dan KRS (first, last, after)
3. Mencari elemen Mahasiswa, Matakuliah dan KRS
4. Menampilkan seluruh data pada list (Mahasiswa, Matakuliah, KRS)
5. Membuat data dummy untuk masing-masing list minimal 5 data (Mahasiswa, Matakuliah) dan 10 data (KRS)
6. Main Program (interface) 

Fungsionalitas yang harus terpenuhi untuk **Binary Search tree** adalah 
1. Menyisipkan node berisikan nilai akademik berdasarkan id nilai.
2. Menghapus node berisikan nilai akademik berdasarkan id nilai. 
3. Mencari node berisikan nilai akademik berdasarkan id nilai.
4. Menampilkan seluruh data secara traversal (in-order, pre-order, dan post-order).
5. Menampilkan nilai minimum, maksimum, tinggi pohon, dan jumlah node .
5. Membuat data dummy untuk BST minimal 10 node berisikan nilai akademik.
6. Melengkapi Main Program (interface)

### Fungsional khusus
Fungsionalitas / studi kasus yang dipilih dari topik ini adalah
1. Melakukan pengisian KRS dengan memilih mahasiswa dan mata kuliah yang akan diambil. Satu mahasiswa dapat mengambil beberapa mata kuliah dan satu mata kuliah dapat diambil oleh banyak mahasiswa.
2. Mencatat nilai mahasiswa untuk setiap mata kuliah yang telah diambil ke dalam BST berdasarkan id nilai.
3. Menampilkan Kartu Hasil Studi (KHS) mahasiswa berdasarkan semester tertentu dengan menampilkan daftar mata kuliah beserta nilai yang diperoleh.
4. Menghitung Indeks Prestasi Semester (IPS) mahasiswa berdasarkan nilai mata kuliah dan jumlah SKS yang diambil pada semester tersebut.

### Fungsional tambahan (Bonus)
Fungsionalitas / studi kasus bonus yang dipilih dari topik ini adalah
1. Menampilkan mahasiswa dengan IPS tertinggi pada suatu semester.
2. Menampilkan mata kuliah dengan jumlah mahasiswa terbanyak.
3. Menampilkan transkrip nilai mahasiswa dari seluruh semester.

---

## Struktur Folder
```bash
├── Tugas-Besar-Kelompok_0x
│   SIAKAD
│   │   interface.cpp
│   │   interface.h
│   │   main.cpp
│   │   SIAKAD.cbp
│   │   SIAKAD.layout
│   │
│   ├───Bonus
│   │   ├───header
│   │   │       bonus.h
│   │   │
│   │   └───implementation
│   │           bonus.cpp
│   │
│   ├───BST
│   │   ├───header 
│   │   │       nilaiBST.h
│   │   │
│   │   └───implementation
│   │           nilaiBST_[nim_anggota_1].cpp
│   │           nilaiBST_[nim_anggota_2].cpp
│   │
│   ├───Khusus
│   │   ├───header
│   │   │       khusus.h
│   │   │
│   │   └───implementation
│   │           khusus.cpp
│   │
│   └───MLL-01
│       ├───header
│       │       matakuliah.h
│       │       krs.h
│       │       mahasiswa.h
│       │
│       └───implementation
│           ├───dosen
│           │       matakuliah_[nim_anggota_1].cpp
│           │       matakuliah_[nim_anggota_2].cpp
│           │
│           ├───krs
│           │       krs_[nim_anggota_1].cpp
│           │       krs_[nim_anggota_2].cpp
│           │
│           └───mahasiswa
│                   mahasiswa_[nim_anggota_1].cpp
│                   mahasiswa_[nim_anggota_2].cpp
├── README.md
└── .gitignore
```


# Pendahuluan 
Program ini adalah implementasi sederhana yang menggunakan C++ sebagai mendemonstrasikan program SIM Akademik untuk mempresentasikan Orang, Dosen, Mahasiswa, dan Tendik. Kode ini dimulai dengan menginput data pengguna, pembuatan objek, dan pencetakan hasil yang mencakup proses pembuatan kode dari awal hingga akhir termasuk analisis kode dan eksekusi. 

# Struktur Kode 
Kode ini dibagi beberapa bagian antara lain: header includes, main, dan struct (walaupun tidak digunakan dalam logika utama). 

a. Header dan Includes 
Kode ini dimulai dari include library standar dan header file custom 

#include <iostream>
#include <string> 
#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim; 

b. Main 
Menangani input, pembuatan objek dan output 

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;

    // == Input data == 
    string name, id, faculty, position; 
    cout << "enter name: "; cin >> name;               // input name 
    cout << "enter id: "; cin >> id;                   // input id
    cout << "enter faculty: "; cin >> faculty;         // input faculty
    cout << "enter position: "; cin >> position;       // input position

    // == Buat objek di masing-masing kelas ==
    Orang o(name, id);                                   
    Dosen d(name, id, faculty); 
    Mahasiswa m(name, id, faculty); 
    Tendik t(name, id, position); 

    // == Hasil data == 
    cout << "orang: " << o.getName() << ", " << o.getId() << endl; 
    cout << "dosen: " << d.getName() << ", " << d.getId() << ", " << d.getFaculty() << endl; 
    cout << "mahasiswa: " << m.getName() << ", " << m.getId() << ", " << m.getFaculty() << endl; 
    cout << "tendik: " << t.getName() << ", " << t.getId() << ", " << t.getPosition() << endl; 

    // == Struct data == 
    struct Orang { 
        string name; 
        string id;
    }; 
    struct Dosen 
    {
        string name; 
        string id; 
        string faculty;
    }; 
    struct Mahasiswa 
    {
        string name; 
        string id; 
        string faculty;
    }; 
    struct Tendik 
    {
        string name; 
        string id; 
        string position;
    }; 

    return 0;
}


# Proses Pembuatan Kode 
enter name: John
enter id: 123
enter faculty: Engineering
enter position: Staff
orang: John, 123
dosen: John, 123, Engineering
mahasiswa: John, 123, Engineering
tendik: John, 123, Staff 

# Analisis dan Kesimpulan 
Kode ini telah mendemostrasikan OOP dasar, tetapi bagian stuct di akhir tidak terintegrasi dan dapat dihapus guna efisiensi. Program ini berjalan tanpa error pada Linux dan compiler g++.  
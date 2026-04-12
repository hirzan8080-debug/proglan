#include <iostream>
#include <string> 
#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim;

// == Main program ==
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

// == Stuct data == 
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
#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    string alamat;
    float ipk;
};

int main(){
mahasiswa adel;

adel.nama="Adelia Febriani";
adel.nim="C030324057";
adel.alamat="Jl. Purnasakti";
adel.ipk=3.6;

cout<< adel.nama<<"\n";
cout<< adel.nim<<"\n";
cout<< adel.alamat<<"\n";
cout<< adel.ipk<<"\n";

getch();
return 0;
}
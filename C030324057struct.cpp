#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
    string Nama;
    string Nim;
    string Alamat;
    float IPK;
};

int main(){
    mahasiswa Adel;
    mahasiswa* ptr = &Adel;

    ptr->Nama = "Adelia Febriani";
    ptr->Nim = "C030324057";
    ptr->Alamat = "Jl. Purnasakti";
    ptr->IPK = 3.6;

    cout << ptr->Nama << "\n";
    cout << ptr->Nim << "\n";
    cout << ptr->Alamat << "\n";
    cout << ptr->IPK << "\n";

getch();
return 0;
}
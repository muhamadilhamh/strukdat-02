/*
Nama = Muhamad Ilham Habib
Kelas =B
NPM = 140810180018
Deskripsi = program ini membuat identitas
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char goldar;
    char jk;
};
int main(){
    Orang Orang;//ini tuh kek analoginya int orang, char orang.
    Orang.umur=18;// . untuk mengakses dari struck atas
    strcpy(Orang.nama,"Muhamad Ilham Habib");//imput variable kanan ke kiri
    Orang.goldar ='B';
    Orang.jk='L';

    // ini outputnya
    cout<<Orang.umur<<endl;
    cout<<Orang.nama<<endl;
    cout<<Orang.goldar<<endl;
    cout<<Orang.jk<<endl;
}

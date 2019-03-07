#include <iostream>
#include <string.h>
/*
Nama = Muhamad Ilham Habib
Kelas =B
NPM = 140810180018
Deskripsi = program ini membuat kek bioskop gtu
*/

using namespace std;
struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};
int main(){
    Theater Theater;
    Theater.room=7;
    strcpy(Theater.seat,"J7");
    strcpy(Theater.movieTitle,"Adit & Jarwo");

    cout<<Theater.room<<endl;
    cout<<Theater.seat<<endl;
    cout<<Theater.movieTitle<<endl;
}

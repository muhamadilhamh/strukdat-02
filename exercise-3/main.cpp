/*
NAMA    = MUHAMAD ILHAM HABIB
NPM     = 140810180018
TANGGAL = 06 MARET 2019
PROGRAM = PROGRAM INI MEMBUAT DATA PEGAWAI
*/
#include <iostream>
#include <string.h>
using namespace std;
struct data{
    string NIP;
    string nama;
    int gol;
    int gaji;
};
data pegawai[10], ex;
void banyakData(int& n);
void inputPegawai(data pegawai[], int n);
void sortingGol(data pegawai[], int n);
void sortingNIP(data pegawai[], int n);
void gajiTertinggi(data pegawai[], int n);
void gajiTerendah(data pegawai[], int n);
void cariGaji(data pegawai[], int n);
void rataGaji(data pegawai[], int n);

int main(){
    int n;
    banyakData(n);
    inputPegawai(pegawai, n);
    cout<<endl;
    cout<<"\t\tDAFTAR GAJI PEGAWAI"<<endl;
    cout<<"---------------------------------------------------------------\n";
    cariGaji(pegawai,n);
    sortingNIP(pegawai,n);
    sortingGol(pegawai, n);
    gajiTertinggi(pegawai,n);
    gajiTerendah(pegawai,n);
    rataGaji(pegawai,n);
}
void banyakData(int& n){
    cout<<"Jumlah Pegawai =";cin>>n;
}
void inputPegawai(data pegawai[], int n){
    for(int i=0;i<n;i++){
        cout<<"Masukan Nama Pegawai =";
        cin.ignore(100,'\n');
        getline(cin,pegawai[i].nama);
        cout<<"Masukan NIP Pegawai =";cin>>pegawai[i].NIP;
        cout<<"1. = 2.000.000\n";
        cout<<"2. = 3.000.000\n";
        cout<<"3. = 5.000.000\n";
        cout<<"4. = 8.000.000\n";
        cout<<"Masukan Golongan Pegawai =";cin>>pegawai[i].gol;
    }
}
void sortingGol(data pegawai[], int n){
    int i, index;
    for(int i=1;i<n;i++){
        ex = pegawai[i];
        index = i;
        while (index>0 && pegawai[index-1].gol>ex.gol){
            pegawai[index]=pegawai[index-1];
            index = index-1;
        }
        pegawai[index]=ex;
    }
}
void sortingNIP(data pegawai[], int n){
    int i, index;
    for(int i=1;i<n;i++){
        ex = pegawai[i];
        index = i;
         while (index>0 && pegawai[index-1].NIP>ex.NIP){
            pegawai[index]=pegawai[index-1];
            index = index-1;
        }
        pegawai[index]=ex;
    }
    cout<<"Urutan pegawai berdasarkan NIP (Assending)\n";

    cout<<"  NIP"<<"\tNama"<<"\t\tGolongan"<<"\t\tGaji"<<endl;
    for (int i=0;i<n;i++){
        cout<<i+1<<". "<<pegawai[i].NIP<<"\t"<<pegawai[i].nama<<"\t\t"<<pegawai[i].gol<<"\t\t\t"<<pegawai[i].gaji<<endl;
    }
    cout<<"---------------------------------------------------------------\n";
}
void gajiTertinggi(data pegawai[], int n){
    cout<<"Gaji Pegawai Tertinggi ="<<pegawai[n-1].nama<<endl;
}
void gajiTerendah(data pegawai[], int n){
    cout<<"Gaji Pegawai Terendah ="<<pegawai[0].nama<<endl;
}
void cariGaji(data pegawai[], int n){
    for (int i=0; i<n; i++){
		if (pegawai[i].gol==1){
			pegawai[i].gaji=2000000;
		}
		else if (pegawai [i].gol==2){
			pegawai[i].gaji=3000000;
		}
		else if (pegawai [i].gol==3){
			pegawai[i].gaji=5000000;
		}
		else if (pegawai [i].gol==4){
			pegawai [i].gaji=8000000;
		}
		else if(pegawai [i].gol>4){
            cout<<"tidak ada";
		}
	}
}
void rataGaji(data pegawai[], int n){
    int gajiTotal=0, rataRata;
    for(int i=0;i<n;i++){
        gajiTotal=gajiTotal+pegawai[i].gaji;
    }
    rataRata=gajiTotal/n;
    cout<<"\nRata-rata Gaji Karyawan ="<<rataGaji<<endl;
}

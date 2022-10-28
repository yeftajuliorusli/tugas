#include <iostream>
using namespace std;

int main(){
    int bilangan [100],i,a,bil,jumlah=0,x;

    cout <<"Masukkan jumlah bilangan = ";
    cin >> i;

    for (x=0;x<i;x++){
        cout <<"Masukkan Indeks ke-"<<x<<" : ";
        cin >> bilangan[x];
    }

    cout <<"Deretan bilangan adalah = ";
    for (x=0;x<i;x++){
        cout <<bilangan[x]<< " ";
    }

    cout <<"\nMasukkan bilangan yang akan dicari : ";
    cin >>bil;

    for (x=0;x<i;x++){
        if (bilangan[x] == bil){
            cout <<"\nBilangan " <<bil<< " ditemukan pada indeks ke : " <<x;
        }
    }

    for (x=0;x<i;x++){
        if (bilangan[x] == bil){
            jumlah++;
        }
    }
    cout <<"\nBilangan "<<bil<< " ditemukan sebanyak "<<jumlah<<" kali";

    return 0;

}
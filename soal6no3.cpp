#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main(){
    char kata1[20], kata2[20];

    cout <<"Masukkan kata pertama : ";
    cin >> kata1;

    cout <<"Masukkan kata kedua : ";
    cin >> kata2;

   strcat(kata1,kata2);

    cout <<"Hasil penggabungannya adalah : " << kata1 <<endl;

    return 0;
}
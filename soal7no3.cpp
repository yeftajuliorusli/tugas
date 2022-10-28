#include<iostream>
using namespace std;

int main(){
    int nilai[]={23, 6, 89,12, 45, 67, 9, 90,54, 30};
    int i;
    for (i = 0; i <= 9; i++){
        if (nilai[0] < nilai[i]){
            nilai[0] = nilai[i];
        }
    }
    cout <<"Angka yang terbesar pada array nilai adalah = "<<nilai[0];

    for (i = 0; i <= 9; i++){
        if (nilai[0] > nilai[i]){
            nilai[0] = nilai[i];
        }
    }
    cout <<"\n\nAngka yang terkecil pada array nilai adalah = "<<nilai[0];

    return 0;
}
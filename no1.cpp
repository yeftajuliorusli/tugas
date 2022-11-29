#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
    
long int pangkat (long int x,long int y){

    if (y > 0){
        return (x * pangkat (x,y-1));
    } else {
        return 1; 
    }
}

int main(){
    long int x,y,hasil;
    cout <<"Masukkan nilai x : ";
    cin >> x;
    cout <<"Masukkan nilai y : ";
    cin >> y;
    cout <<"Hasil x pangkat y adalah = "<<pangkat (x,y);

    return 0;
}
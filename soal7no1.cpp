#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    char nama[5][20];
    float nilai1[5];
    float nilai2[5];
   float hasil[5];
    for(i=1;i<=2;i++)
    {
        cout<<"Data Ke - "<<i<<endl;
        cout<<"Nama Siswa : ";
        cin >>nama[i];
        cout<<"Nilai MidTest : ";
        cin >> nilai1[i];
        cout<<"Nilai Final : "; 
        cin >> nilai2[i];
        hasil[i] = (nilai1[i] * 0.40)+ (nilai2[i] * 0.60);
    }
    cout<<endl;
    cout<<"------------------------------------------";
    cout<<"-------"<<endl;
    cout<<"No. \tNama Siswa \tNilai   Nilai Hasil"<<endl;
    cout<<" \t\t\tMidTest Final Ujian"<<endl;
    cout<<"------------------------------------------";
    cout<<"-------"<<endl;
    for(i=1;i<=2;i++)
    {
     cout<<setiosflags(ios::left)<<setw(8)<<i;
     cout<<setiosflags(ios::left)<<setw(16)<<nama[i];
     cout<<setprecision(2)<<"  "<<nilai1[i];
     cout<<setprecision(2)<<"    "<<nilai2[i];
     cout<<setprecision(4)<<"    "<<hasil[i]<<endl;
    }
    cout<<"------------------------------------------";
    cout<<"-------"<<endl;
    return 0;
}
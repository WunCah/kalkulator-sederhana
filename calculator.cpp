#include<iostream>

using namespace std;

main()
{
    cout<<"Nur Wulan Cahyani \n";
    cout<<"19051397010 \n"
    cout<<"D4 manajemen Informatika \n";
    cout<<"Selamat datang di program calculator" ;cout<<"\n";
    int nilai1,nilai2,pilihan,hasil;
    cout<<"Masukan nilai pertama : ";cin>>nilai1;
    cout<<"Masukan nilai kedua : ";cin>>nilai2;
    cout<<"\n";
    cout<<"[1] Penjumlahan ";cout<<"\n";
    cout<<"[2] Perkalian ";cout<<"\n";
    cout<<"[3] Pembagian ";cout<<"\n";
    cout<<"[4] Pengurangan ";cout<<"\n";
    cout<<"\n";
    cout<<"Masukan Pilihan Anda : ";cin>>pilihan;
    if (pilihan>4)
    {
        cout<<"Pilihan Anda Salah";
    }
    else
    {
        if (pilihan ==1)
        {
            hasil = nilai1+nilai2;
            cout<<"hasil penjumlahan : "<<hasil;
        }
        else if (pilihan==2)
        {
            hasil = nilai1*nilai2;
            cout<<"hasil perkalian : "<<hasil;
        }
        else if (pilihan==3)
        {
            hasil = nilai1/nilai2;
            cout<<"hasil pembagian : "<<hasil;
        }
        else if (pilihan==4)
        {
            hasil = nilai1-nilai2;
            cout<<"hasil pengurangan : "<<hasil;
        }
    }
    return 0;
}

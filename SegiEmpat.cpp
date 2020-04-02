#include <iostream>
#include <string>
#include "SegiEmpat.h"
using namespace std;
main()

{

int panjang;
    cout<<"Mencari Nilai Keliling dan Luas Persegi Empat";cout<<endl;
    cout<<endl;

    cout<<"Masukan Panjang : ";
    cin>>panjang;
    cout<<endl;

    SegiEmpat obj;
    obj.assign(panjang);
    cout<<"Keliling : ";cout<< obj.Keliling() << endl;
    cout<<"Luas     : ";cout<< obj.Luas() << endl;
    return 0;
}

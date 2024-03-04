#include <iostream>
using namespace std;

int main(){
    string status;
    int nMTK, nFIS, nRerata;

    cout << "Masukan Nilai Matematika = ";
    cin >> nMTK;

    cout << "Masukan Nilai Fisika = ";
    cin >> nFIS;
    nRerata = (nMTK + nFIS) / 2;

    if(nRerata >= 60){
        status = "Lulus";
    }
    else if(nMTK >= 70){
        status = "Lulus";
    }
    else if(nRerata < 60){
        status = "Tidak Lulus";
    }
    else{
        status = "Tidak Lulus";
    }
    cout << "Tampilkan status  = " << status << endl;

    return 0;

}
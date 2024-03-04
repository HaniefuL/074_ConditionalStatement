#include <iostream>
using namespace std;

int main(){
    int nBilA, nBilB;
    string status;

    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand() % 10;

    cout << "Bilangan A = " << nBilA << endl;
    cout << "Bilangan B = " << nBilB << endl;

    if (nBilA == nBilB){
        status = "bilangan A lebih besar dari bilangan B";
    }
    else if(nBilA = nBilB){
        status = "nilai A dan nilai B sama besar ";
    }
    else{
        status = "bilangan Alebih kecil dari bilangan B";
    }
    cout << "Tampilkan status = " << status << endl;

    return 0;
}
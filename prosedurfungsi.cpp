#include <iostream>
using namespace std;

string nama;
int nXpander, nProsche, nAvanza, nBrio, nLamborghini;
int hXpander =


void input(){
    cin >> nama;
    cout << "Nama Pembeli : ";
    cout << "Jumlah :";

    cout << "Jumlah Porsche: ";
    cin >> nPorsche;

    cout << "Jumlah Avanza : ";
    cin >> nAvanza;

    cout << "Jumlah Brio: ";
    cin >> nBrio;

    cout << "JUmlah Lambhorgini; ";
    cim >> nLamborghini;


    int TotalHarga(){
        return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza*hAvanza) + (nBrio * hBrio) + (nLamborgini * hLamborgini);
    }

    void Display(){
        cout << "Total Harganya : " << TotalHarga() << endl;
    }

    int main()
    char pilihan;
    do(
    input();
    Display();
    cout << "Apakah ingin kembali ?" << endl;
    cin >> pilihan
    while(pilihan == 'y'||pilihan == 'Y');
}

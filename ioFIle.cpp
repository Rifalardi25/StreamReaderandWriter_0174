#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    // membuat objek output file stream
    ofstream outfile;
    // membuka file untuk ditulisi
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline (cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break; 
        // menuliskan dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
}
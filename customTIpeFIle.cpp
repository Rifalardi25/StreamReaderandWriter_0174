#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void readandwritefile(string format){
    string baris, nameFile;

    cout << "Masukan name file : ";
    cin >> nameFile;
    cin.ignore();

    // Membaut objek output file stream
    ofstream outfile;
    // Membuka file untuk ditulisi.
    outfile.open(nameFile + format);

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;

    // Unlimited loop untuk menulis
    while(true){
        cout << "- ";
        // Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // Loop akan berhanti jika anda memasuakn karakter q
        if (baris == "q")break;
        // Menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // Mmbuat objek input file stream
    ifstream infile;

    // Mmebuak file yang telah ditulis
    infile.open(nameFile + format);

    cout << endl << ">= Membuka dan membaca file " << endl;
    // Jika file ada maka
    if (infile.is_open()){
        // Melakukan perulanagn setiap baris
        while (getline(infile, baris)){
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // Jika tidak ditemukan file makan akan menampilkan ini
    else cout << "Unable to open file";
}

int main()
{
    int choice;
    cout << "1. File berfomat csv" << endl;
    cout << "2. File berformat txt" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih format file (1/2/3): ";
    cin >> choice;
    cin.ignore(); // Mengabaikan newline karakter setelah input pilihan
    switch (choice) {
        case 1:
            readandwritefile("csv");
            break;
        case 2:
            readandwritefile("txt");
            break;
        case 3:
            cout << "Keluar dari program." << endl;
            return 0;
        default:
            cout << "Pilihan tidak valid." << endl;

    return 0;
}
}


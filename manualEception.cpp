#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; // Melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        // Blok ini akan dieksekusi
        cout << a << " : Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*Jika selain iteger maka block ini akan dieksekusi*/
        cout << "Default Pengecualian dieksekusi" << endl;
    }

    return 0;
}
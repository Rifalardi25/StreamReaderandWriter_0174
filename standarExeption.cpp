#include <iostream>
#include <exception>
// Untuk objek exception yang akan digunakan
#include <array>
// Untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // Penanda 1:...
    try {
        array<int, 3> data = {10, 20, 30};
        // Pesan array integer 3 elemen
        cout << data.at(5) << endl;
        // Memanggil array elemen ke 5
    }
    catch (exception& e) {
        // Penangkap menggunakan objek exception
        cout << e.what() << endl;
        /*Akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang Terakhir" << endl;

    /*Penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}
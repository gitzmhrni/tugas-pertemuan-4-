#include <iostream>
using namespace std;
int main (){
int tinggi;

    // Meminta input tinggi segitiga dari pengguna
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    // Loop untuk setiap baris segitiga
    for (int i = 1; i <= tinggi; ++i) {
        // Loop untuk mencetak spasi
        for (int j = 1; j <= tinggi - i; ++j) {
            cout << " ";
        }
        // Loop untuk mencetak bintang
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        // Pindah ke baris berikutnya
        cout << endl;
    }



    return 0;
}

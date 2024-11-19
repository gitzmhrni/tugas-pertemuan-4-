#include <iostream>
using namespace std;

int main (){
   int n, t1 = 0, t2 = 1, nextTerm = 0;

    // Meminta pengguna memasukkan jumlah bilangan Fibonacci yang ingin ditampilkan
    cout << "Masukkan jumlah bilangan Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        // Untuk dua bilangan pertama (0 dan 1), kita langsung cetak
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }

        // Untuk bilangan selanjutnya, hasilkan dengan menjumlahkan dua bilangan sebelumnya
        nextTerm = t1 + t2;
        cout << nextTerm << ", ";

        // Update nilai t1 dan t2
        t1 = t2;
        t2 = nextTerm;
    }
return 0;
}

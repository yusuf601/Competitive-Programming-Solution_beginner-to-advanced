#include <iostream>
using namespace std;

int main() {
    int angka1, angka2, angka3, angka4, terbesar;

    cin >> angka1 >> angka2 >> angka3 >> angka4;

    // Inisialisasi terbesar dengan angka pertama
    terbesar = angka1;

    // Bandingkan dengan angka lainnya dan update terbesar jika perlu
    if (angka2 > terbesar) {
        terbesar = angka2;
    }
    if (angka3 > terbesar) {
        terbesar = angka3;
    }
    if (angka4 > terbesar) {
        terbesar = angka4;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}
#include <tests/function.h>
#include <iostream>
using namespace std;
////https://www.hackerrank.com/challenges/c-tutorial-functions/
int main() {
    int a, b, c, d, terbesar;

    // Membaca input
    cin >> a >> b >> c >> d;

    // Inisialisasi terbesar dengan nilai pertama
    terbesar = a;

    // Membandingkan dengan bilangan lainnya dan memperbarui terbesar jika perlu
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }
    if (d > terbesar) {
        terbesar = d;
    }

    // Mencetak hasil
    cout << terbesar << endl;

    return 0;
}
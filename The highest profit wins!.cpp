#include <iostream>
#include <vector> // Menggunakan vector untuk ukuran array dinamis
using namespace std;

int main() {
    int n;
    cout << "Masukkan panjang array = ";
    cin >> n;

    // Menggunakan vector untuk fleksibilitas ukuran
    vector<int> nilai(n);

    // Meminta pengguna memasukkan nilai-nilai
    cout << "Masukkan nilai-nilai: ";
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    int min = nilai[0];
    int max = nilai[0];

    for (int i = 1; i < n; i++) { // Mulai dari indeks 1 karena nilai[0] sudah dibandingkan
        if (nilai[i] < min) {
            min = nilai[i];
        } else if (nilai[i] > max) {
            max = nilai[i];
        }
    }

    // Mencetak hasil
    cout << "Nilai minimum: " << min << endl;
    cout << "Nilai maksimum: " << max << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Inisialisasi variabel untuk menyimpan panjang kata terakhir
    int panjang_kata_terakhir = 0;
    //output
    //aku sayang lenght 10.10 -1 = 9 

    // Iterasi dari karakter terakhir
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        // Jika karakter saat ini adalah spasi atau kita sudah mencapai awal kalimat,
        // maka kita telah menemukan akhir kata terakhir
        if (kalimat[i] == ' ' || i == 0) {
            // Hitung panjang kata terakhir dengan menghitung jumlah karakter
            // dari indeks i hingga akhir kalimat
            panjang_kata_terakhir = kalimat.length() - i;
            break; // Keluar dari loop karena kita sudah menemukan kata terakhir
        }
    }

    cout << "Panjang kata terakhir: " << panjang_kata_terakhir << endl;

    cin.get();
    return 0;
}
//kalimat lenght adalah keseluruhan panjang string dan i adalah ketika telah menemukan spasi di maka nilai i yg tersisa itu yg dihitung jadi .karna logika or hanya memerlukan 1 kondisi true
/*
Operator OR (||) dalam kondisi if memastikan bahwa kita akan menghentikan perhitungan jika salah satu dari dua kondisi benar:

Jika kalimat[i] == ' ' (kita telah menemukan spasi).
Jika i == 0 (kita telah mencapai awal string).
Karena OR hanya memerlukan satu kondisi yang benar untuk dieksekusi, iterasi akan berhenti segera setelah salah satu dari kondisi tersebut terpenuhi.

Dengan demikian, i menunjukkan posisi terakhir yang dihitung untuk menemukan panjang kata terakhir dalam kalimat.
*/
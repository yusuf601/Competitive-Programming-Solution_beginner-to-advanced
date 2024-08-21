#include <iostream>
#include <string>
using namespace std;

int main() {
	string kata1,kata2;
    string jumlah;
    getline(cin,kata1);
    getline(cin,kata2);
    cout << kata1 << endl;
    cout << kata2 << endl;

    int panjang1 = kata1.size();
    int panjang2 = kata2.size();
    cout << panjang1 << " " << panjang2 << endl;
    // cout << panjang2 << endl;
    // kata1.append(kata2);
    jumlah = kata1 + kata2;
    cout << jumlah << endl;

    kata1[0] = kata2[0];
    kata2[0] = kata1[0];
    cout << kata1 << " " << kata2 << endl;


  
    return 0;
}
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string a, b, temp;

//     // Membaca input
//     cin >> a >> b;

//     // Menampilkan panjang
//     cout << a.length() << " " << b.length() << endl;

//     // Menggabungkan string
//     string gabungan = a + b;
//     cout << gabungan << endl;

//     // Menukar seluruh string
//     temp = a;
//     a = b;
//     b = temp;

//     // Menampilkan hasil setelah ditukar
//     cout << a << " " << b << endl;

//     return 0;
// }
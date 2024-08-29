#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void komparasi(int *a, int *b){
    int hasil1,hasil2;
    hasil1 = (*a) + (*b);
    cout << hasil1 << endl;
    hasil2 = (*a) - (*b);
    if(hasil2 < 0){
        hasil2 = (*a) - (*b);
        hasil2 = abs(hasil2);
        cout << hasil2 << endl;
    }else{
        cout << hasil2 << endl;
    }
    // cout << hasil2 << endl;
   


    

};
int main() {
    int angka1,angka2;
    cout << "Masukkan nilai = ";
    cin >> angka1;
    cout << "Masukkan nilai = ";
    cin >> angka2;

    int *Pa = &angka1;
    int *Pb = &angka2;
    // cout << angka1 << endl;
    // cout << angka2 << endl;

    komparasi(&angka1,&angka2);


    return 0;
}

// #include <iostream>
// #include <cmath>

// using namespace std;

// void modifyValues(int& a, int& b) {
//     int temp = a; // Store the original value of a
//     a = a + b;    // Calculate the sum and store it in a
//     b = abs(temp - b); // Calculate the absolute difference and store it in b
// }

// int main() {
//     int a, b;
//     cin >> a >> b;

//     modifyValues(a, b);

//     cout << a << endl;
//     cout << b << endl;

//     return 0;
// }
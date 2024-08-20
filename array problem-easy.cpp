#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>



int main() {
    int n;
    // int a;

    std::cin >> n;
    std::cout << n << std::endl; 
    std::array <int, 5> nilai;

    for(int i = 0; i < 5; i++){
        nilai[i] = nilai[5 - i];
        std::cout << nilai[i] << " " << std::endl;

    }

    // std::cout << nilai[i] << std::endl;


    std::cout << n << std::endl;

    
    return 0;
 }

// #include <iostream>
// #include <array>

// int main() {
//     int n;
//     std::cin >> n;

//     std::array<int, 5> nilai;

//     // Inisialisasi nilai-nilai array (jika diperlukan)
//     for (int i = 0; i < 5; i++) {
//         nilai[i] = i; // Contoh inisialisasi
//     }

//     // Membalik array menggunakan dua pointer
//     for (int i = 0; i < n / 2; i++) {
//         std::swap(nilai[i], nilai[n - i - 1]);
//     }

//     // Mencetak array yang sudah dibalik
//     for (int i = 0; i < n; i++) {
//         std::cout << nilai[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka = ";
    cin >> n;

    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        cout << words[n - 1] << endl;
    } else {
        cout << "Greather than 9" << endl;
    }

    cin.get();
    return 0;
}


    // cout << "Masukkan angka = ";
    // cin >> n;

    // if(n == 1){
    //     cout << "one" << endl;
    // }else if(n == 2){
    //     cout << "two" << endl;
    // }else if(n == 3){
    //     cout << "three" << endl;
    // }else if(n == 4){
    //     cout << "foor" << endl;
    // }else if(n == 5){
    //     cout << "five" << endl;
    // }else if(n == 6){
    //     cout << "six" << endl;
    // }else if(n == 7){
    //     cout << "seven" << endl;
    // }else if(n == 8){
    //     cout << "eight" << endl;
    // }else if(n == 9){
    //     cout << "nine" << endl;
    // }else if(n > 9){
    //     cout << "Greather than 9" << endl;
    // }else{
    //     cout << "error Not found" << endl;
    // }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if there are at least two elements for adjacent sums
    if (n < 2) {
        cout << "Not enough elements for adjacent sums." << endl;
        return 1; // Indicate an error
    }

    for (int i = 0; i < n - 1; i++) { // Stop one element before the end
        int hasil = i + (i + 1); // Directly use i and i + 1
        cout << hasil << endl;
    }

    return 0;
}
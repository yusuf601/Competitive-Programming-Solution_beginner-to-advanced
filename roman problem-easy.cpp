#include <iostream>
#include <unordered_map>
#include <string>

int romanToInt(std::string s) {
    std::unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int total = 0;
    int prevValue = 0;
    
    for (int i = s.length() - 1; i >= 0; --i) {
        int currentValue = roman[s[i]];
        
        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }
        
        prevValue = currentValue;
    }
    
    return total;
}

int main() {
    std::string s;
    std::cout << "Enter a Roman numeral: ";
    std::cin >> s;
    
    int result = romanToInt(s);
    std::cout << "The integer value is: " << result << std::endl;
    
    return 0;
}

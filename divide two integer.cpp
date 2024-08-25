#include <iostream>
using namespace std;


class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) {
            // Handle division by zero
            return 0;
        }

        // Use long long to prevent overflow
        long long result = (long long)dividend / (long long)divisor;

        // Check for overflow
        if (result > INT_MAX || result < INT_MIN) {
            // Handle overflow
            return INT_MAX; // Or return another appropriate value
        }

        return (int)result;
    }
};

#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x % 10 == 0 && x != 0) return false;

        int reverse = 0;

        while(x > reverse) {
            reverse = reverse * 10 + (x % 10);
            x = x / 10;
        }

        return x == reverse || x == reverse / 10;
    }
};
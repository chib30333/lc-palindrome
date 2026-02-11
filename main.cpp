#include <vector>
#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x == 0) return true;
        
        std::vector<int> array;
        int deep = std::floor(std::log10(x)) + 1;
        int rotate = 0;

        while(true) {
            if(rotate >= deep / 2) break;

            int right = x % 10;
            int left = x / std::floor(std::pow(10, deep - 1));

            if(right != left) return false;

            x = (x - left * std::floor(std::pow(10, deep - 1))) / 10;
            deep -= 2;

            rotate++;
        }

        return true;
    }
};
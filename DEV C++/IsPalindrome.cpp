#include <iostream>

class Solution {
public:
    bool isPalindrome(int x);
};

bool Solution::isPalindrome(int x) {
    int reversedNum = 0;
    int originalNum = x;
        
    while (x > 0) {
        int digit = x % 10;
        reversedNum = reversedNum * 10 + digit;
        x /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int number;
    std::cout << "Type your number: ";
    std::cin >> number;
    
    Solution myObj;
    
    if (myObj.isPalindrome(number)) {
        std::cout << number << " is a palindrome" << std::endl;
    }
    else {
        std::cout << number << " is not a palindrome." << std::endl;
    }
    
    return 0;
}

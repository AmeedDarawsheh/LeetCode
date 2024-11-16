#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string d = std::to_string(x);  // Convert integer to string
        int y = d.size();
        
        for(int i = 0; i < y / 2; i++) {
            if(d[i] != d[y - i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};

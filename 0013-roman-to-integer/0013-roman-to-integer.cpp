#include <string>

class Solution {
public:
    int romanToInt(const std::string& s) {
        int sum = 0;
        int previousValue = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int currentValue = 0;
            switch (s[i]) {
                case 'I':
                    currentValue = 1;
                    break;
                case 'V':
                    currentValue = 5;
                    break;
                case 'X':
                    currentValue = 10;
                    break;
                case 'L':
                    currentValue = 50;
                    break;
                case 'C':
                    currentValue = 100;
                    break;
                case 'D':
                    currentValue = 500;
                    break;
                case 'M':
                    currentValue = 1000;
                    break;
            }
            
            if (currentValue < previousValue) {
                sum -= currentValue;
            } else {
                sum += currentValue;
            }
            previousValue = currentValue;
        }

        return sum;
    }
};

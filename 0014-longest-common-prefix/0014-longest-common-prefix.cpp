#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";  // Handle empty vector case

        std::string prefix = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            // Check if the current prefix is at the start of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";  // If prefix becomes empty, return ""
            }
        }
        
        return prefix;
    }
};

#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int countr = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j]) {
                    countr++;
                }
            }
        }
        
        return countr;
    }
};

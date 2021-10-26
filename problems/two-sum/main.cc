class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> ans;
            
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) != hash.end()) {
                if (hash[target - nums[i]] != i ) {
                    ans.push_back(i);
                    ans.push_back(hash[target - nums[i]]);
                    break;
                }
            }
        }
        
        return ans;
    }
};



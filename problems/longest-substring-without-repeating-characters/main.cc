class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> memo(s.length());
        if(s.length() == 0) {
            return 0;
        }
        
        for(int i = 0; i < s.length(); i++){
            unordered_map<int, int> hash;
            int cnt = 0;
            for(int j = i; j < s.length(); j++){
                if(hash[s[j]] < 1) {
                    hash[s[j]] += 1; 
                    memo[i] += 1;
                }else {
                    memo[i] = cnt;
                    cnt = 0;
                    break;
                }
                cnt++;
            }
        }

        return *max_element(memo.begin(), memo.end());
    }
};

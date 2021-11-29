unordered_map<char, string> numbers({
    {'2',"abc"},
    {'3',"def"},
    {'4',"ghi"},
    {'5',"jkl"},
    {'6',"mno"},
    {'7',"pqrs"},
    {'8',"tuv"},
    {'9',"wxyz"}
});

class Solution {
    public:
    vector<string> letterCombinations(string digits) {
        int N = digits.size();
        vector<string> ans;
        if (N == 0) {
            return ans;  
        } 

        dfs(0, N, "", ans, digits);

        return ans;
    }
    void dfs(int position, int &N, string str, vector<string> &ans, string &digits) {
        if (position == N) {
            ans.push_back(str);
        }  else {
            string letters = numbers[digits[position]];
            cout << letters << endl;
            for (int i = 0; i < letters.size(); i++) {
                dfs(position+1, N, str+letters[i], ans, digits);
            }
        }
    }
};

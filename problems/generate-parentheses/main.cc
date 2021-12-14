class Solution {
    bool checkParents(string parents){
        int cnt = 0;

        for(int i=0; i < parents.size(); ++i) {
            if(cnt<0){
                return false;
            }
            if(parents[i] == '('){
                cnt++;
            }else{
                cnt--;
            } 
        }

        return true;
    }
    public:
    vector<string> generateParenthesis(int n) {
        char str1[] = "()";
        string parents; 
        vector<string> result; 

        for(int i=0; i < n; ++i) {
            parents.append(str1);
        }
        do {
            if(checkParents(parents)) {
                result.push_back(parents);
            }
        } while (prev_permutation(parents.begin(), parents.end()));

        return result;
    }
};


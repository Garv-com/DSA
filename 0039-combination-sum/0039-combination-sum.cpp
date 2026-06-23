class Solution {
public:
    set<vector<int>> s;

    void combin(vector<int>& candidates, vector<vector<int>> &ans, int target, vector<int>temp, int idx){
        if(idx==candidates.size() || target<0){
            return;
        }

        if(target==0){
            if(s.find(temp)==s.end()){
                ans.push_back(temp);
                s.insert(temp);
            }
            return;
        }

        temp.push_back(candidates[idx]);
        combin(candidates, ans, target-candidates[idx], temp, idx+1);    //single 
        combin(candidates, ans, target-candidates[idx], temp, idx);    //multiple 
        temp.pop_back();
        combin(candidates, ans, target, temp, idx+1);    //discard
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combin(candidates, ans, target, temp, 0);
        return ans;
    }
};
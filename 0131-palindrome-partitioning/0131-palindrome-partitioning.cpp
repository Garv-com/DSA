class Solution {
public:

    bool isPal(string s){
        string temp=s;
        reverse(temp.begin(), temp.end());
        return s==temp;
    }

    void helper(string s, vector<string> &partitions, vector<vector<string>> &ans){
        if(s.size()==0){
            ans.push_back({partitions});
            return;
        }

        for(int i=0; i<s.size(); i++){
            string part=s.substr(0, i+1);
            if(isPal(part)){
                partitions.push_back(part);
                helper(s.substr(i+1), partitions, ans);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> partitions;
        vector<vector<string>> ans;
        helper(s, partitions, ans);
        return ans;
    }
};
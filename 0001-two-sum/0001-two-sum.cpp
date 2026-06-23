class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> vec1;
        int first, second;
        for(int i=0; i<nums.size(); i++){
            first = nums[i];
            second=target-first;
            if(m.find(second) != m.end()){
                vec1.push_back(i);
                vec1.push_back(m[second]);
                break;
            }
            m[first]=i;
        }
        return vec1;
    }
};
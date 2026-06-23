class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec1;
        vector<int> vec2(2,-1);
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                vec1.push_back(i);
            }
        }
        vector<int> vec3(vec1);
        if(vec1.size()==1){
            int k=vec1[0];
            vec3.push_back(k);
            return vec3;
        }

        if(vec1.empty()){
            return vec2;
        }

        if(vec1.size()>2){
            int n=vec1.size();
            vec1[1]=vec1[n-1];
            while(vec1.size()!=2){
                vec1.pop_back();
            }
        }

        return vec1;
    }
};
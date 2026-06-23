class Solution {
public:
    bool searchRow(vector<vector<int>>& mat, int target, int row){
        int n=mat[0].size();
        int st=0, end=n-1;

        while(st<=end){
            int mid = st + (end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }
            else if(target>mat[row][mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();

        int mst=0, mend=m-1;
        while(mst <= mend){
            int mMid = mst + (mend-mst)/2;

            if(target>=mat[mMid][0] && target<=mat[mMid][n-1]){
                return searchRow(mat, target, mMid);
            }

            else if(target>=mat[mMid][n-1]){
                mst=mMid+1;
            }

            else{
                mend = mMid-1;
            }
        }
        return false;
    }
};
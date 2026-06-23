class Solution {
public:

    bool knight(vector<vector<int>>& grid, int r, int c, int n, int tar){
        if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=tar) return false;

        if(tar==(n*n)-1) {return true;}

        int ans1=knight(grid, r-2, c+1, n, tar+1);
        int ans2=knight(grid, r-1, c+2, n, tar+1);
        int ans3=knight(grid, r+1, c+2, n, tar+1);
        int ans4=knight(grid, r+2, c+1, n, tar+1);
        int ans5=knight(grid, r+2, c-1, n, tar+1);
        int ans6=knight(grid, r+1, c-2, n, tar+1);
        int ans7=knight(grid, r-1, c-2, n, tar+1);
        int ans8=knight(grid, r-2, c-1, n, tar+1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 ||ans8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        return knight(grid, 0,0, grid.size(), 0);
    }
};
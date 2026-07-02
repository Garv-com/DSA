class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tGas=0, tCost=0;

        int st=0, currGas=0;
        for(int i=0, n=gas.size(); i<n; i++){
            currGas = currGas + gas[i] - cost[i];
            tGas+=gas[i]; tCost+=cost[i];

            if(currGas<0){
                st = i+1;
                currGas = 0;
            }
        }

        return tGas<tCost ? -1 : st;
    }
};
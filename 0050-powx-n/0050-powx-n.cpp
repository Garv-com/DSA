class Solution {
public:
    double myPow(double x, int n) {
        long binar=n; double ans=1;

        if(x==1) return 1;

        if(n<0){
            x=1/x;
            binar=-binar;
        }
        while(binar>0){
            if(binar%2==1){
                ans=ans*x;
            }
            x*=x;
            binar/=2;
        }
        return ans;
    }
};
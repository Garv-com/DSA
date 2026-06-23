class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0, rem, temp;
        temp=x;
    if(x<0){
        return false;
    }

        while(temp!=0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
        if(x==rev){
            return true;
        }
        else{
            return false;
        }
    }
    
};
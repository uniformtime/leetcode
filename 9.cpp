class Solution {
public:
bool isPalindrome(int x) {
    if(x<0)
        return false;
    long int reverse = 0;
    int def_x = x;
    while(x!=0)
    {
        reverse*=10;
        reverse += x%10;
        x/=10;
    }
    if(def_x == reverse)
        return true;
    else
        return false;
}
};
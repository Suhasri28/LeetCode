class Solution {
public:  
    bool isPalindrome(int x) {
        // int reverse = 0, temp = x;

        // while(temp > 0) {
        //     int d = temp % 10;
        //     reverse = (reverse * 10) + d;
        //     temp = temp / 10;
        // }
        // return reverse == x;

        string temp = to_string(x);
        int i = 0, j = temp.size() - 1;
        while(i < j) {
            if(temp[i] != temp[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
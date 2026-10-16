class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int value = 0, temp = n;
        string t = to_string(n);
        int size = t.size();
        
        while(temp > 0) {
            int digit = temp % 10;
            value += pow(digit, size);
            temp /= 10;
        }
        
        return value == n;
    }
};
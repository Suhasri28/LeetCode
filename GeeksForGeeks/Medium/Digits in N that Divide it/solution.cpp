class Solution {
  public:
    int divisibleByDigits(string& s) {
        int count = 0;
        vector<int> check(10,0);
        
        for(int i = 0; i <= 9; i++) {
            int num = i;
            if(num == 0) {
                continue;
            }
            int rem = 0;
            for(int j = 0; j < s.size(); j++) {
                rem = (rem * 10) + (s[j] - '0');
                rem = rem % num;
            }
            
            if(rem == 0) {
                check[i] = 1;
            }
        }
        
        for(int i = 0; i < s.size(); i++) {
            int num = s[i] - '0';
            if(check[num] == 1) {
                count++;
            } 
        }
        
        return count;
    }
};
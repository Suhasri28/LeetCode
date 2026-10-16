class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int a1 = a, b1 = b;
        while(b1 > 0) {
            int temp = a1;
            a1 = b1;
            b1 = temp % a1;
        }
        int gcd = a1;
        int lcm = (a * b) / gcd;
        return {lcm, gcd};
    }
};
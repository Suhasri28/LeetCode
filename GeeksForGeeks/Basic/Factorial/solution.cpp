class Solution {
  public:
    int fact = 1;
    int factorial(int n) {
        // code here
        if(n == 0) return fact;
        fact = fact*n;
        return factorial(n-1);
    }
};
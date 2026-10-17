class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        long long sum = 0;
        for(long long i = 1; i <= n; i++) {
            for(long long j = 1; j <= i; j++) {
                if(i % j == 0) {
                    sum += j;
                }
            }
        }
        
        return sum;
    }
};
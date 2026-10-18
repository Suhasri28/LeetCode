class Solution {
  public:
    int num = 1;
    void printTillN(int n) {
        // code here
        if(num > n) return;
        cout<<num<<" ";
        num++;
        printTillN(n);
    }
};
#include <iostream>
using namespace std;
int sum_print(int &sum, int n) {
    if(n == 0) return sum;
    sum += n;
    return sum_print(sum, n - 1);
}
int main() {
    int n;
    cin >> n;

    // code here
    int sum = 0;
    sum_print(sum, n);
    cout<<sum;

    return 0;
}
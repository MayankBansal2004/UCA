#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    static void towerOfHanoi(int n, const string& src, const string& helper, const string& dest) {
        if (n == 1) { // Base case
            cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
            return;
        }
        towerOfHanoi(n - 1, src, dest, helper); // Step 1
        cout << "Transfer disk " << n << " from " << src << " to " << dest << endl; // Step 2
        towerOfHanoi(n - 1, helper, src, dest); // Step 3
    }
};

int main() {
    int n = 3; // Number of disks
    Solution::towerOfHanoi(n, "A", "B", "C"); // Solve the problem
    return 0;
}

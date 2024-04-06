#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    // Correct the value of k if it's greater than n
    k = k % n;
    if (k == 0) return; // No need to rotate if k is 0
    
    // Create a temporary vector to store rotated elements
    vector<int> rotated(n);
    
    // Copy the last k elements to the beginning of rotated vector
    copy(nums.end() - k, nums.end(), rotated.begin());
    
    // Copy the remaining elements to the end of rotated vector
    copy(nums.begin(), nums.end() - k, rotated.begin() + k);
    
    // Copy the rotated elements back to nums
    nums = rotated;
    
    // Print the rotated vector
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {-1, -100, 3, 99};
    int k = 2;
    rotate(nums, k);
    return 0;
}

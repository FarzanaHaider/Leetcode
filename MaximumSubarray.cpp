#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum, sum;
        maxsum = sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (sum < 0) {
                sum = nums[i];
            } else {
                sum += nums[i];
            }
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Example input
    int maxSum = sol.maxSubArray(nums);
    cout << "Maximum sum of contiguous subarray: " << maxSum << endl;
    return 0;
}


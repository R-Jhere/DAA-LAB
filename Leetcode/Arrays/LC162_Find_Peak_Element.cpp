// LeetCode 162: Find Peak Element
// Problem: A peak element is an element that is strictly greater than its neighbors.
// Given a 0-indexed integer array, find a peak element and return its index.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                // Peak is on the left side (including mid)
                right = mid;
            } else {
                // Peak is on the right side
                left = mid + 1;
            }
        }
        
        return left;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    
    int peakIndex = sol.findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << nums[peakIndex] << endl;
    
    return 0;
}

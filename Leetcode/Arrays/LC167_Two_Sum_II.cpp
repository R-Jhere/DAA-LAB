// LeetCode 167: Two Sum II - Input Array Is Sorted
// Problem: Given a 1-indexed array of integers that is already sorted in non-decreasing order,
// find two numbers such that they add up to a specific target number.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // 1-indexed
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return {-1, -1}; // No solution found
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = sol.twoSum(numbers, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    
    return 0;
}

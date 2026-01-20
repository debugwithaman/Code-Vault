#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    // lets find all the pairs:
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int first = nums[i];
            int second = nums[j];
            int sum = first + second;
            if (sum == target) {
                return {i, j};
            }
        }
    }
    // return empty array:
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}

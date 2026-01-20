#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int>& nums) {
    int ans = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 3, 5, 4, 5, 3, 2}; // Example input
    cout << "The unique element is: " << findUniqueElement(nums) << endl;
    return 0;
}

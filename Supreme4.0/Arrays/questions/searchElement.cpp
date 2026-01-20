#include <iostream>
#include <vector>
using namespace std;

// in actual problem solving either on leetcode or any platform just solve the main function not the complete code like this


int searchElementInArray(vector<int>& nums, int target) {
    int size = nums.size(); // We have used this line because we have used the vector array which is a stl

    for (int i = 0; i < size; i++) {
        int value = nums[i];
        if (value == target) {
            return i;  // Found target, return index
        }
    }

    return -1; // Target not found in the array
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;

    int index = searchElementInArray(arr, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

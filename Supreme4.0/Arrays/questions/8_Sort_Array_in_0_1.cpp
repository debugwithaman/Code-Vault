#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortArray(vector<int>& nums) {

    // Approach 1: Using STL function :

    // vector<int> arr = nums; // Make a copy of the original array 
    // // the sort is an inbuild function in c++ stl
    // sort(arr.begin(), arr.end()); // Sort the array
    // return nums;

    // Approach 2: Without using STL function : 

    // Step1: Counting
    int totalZero = 0;
    int totalOne = 0;
    int n = nums.size();

     vector<int> arr = nums; // Make a copy of the original array 

    for(int i = 0;i<n;i++){
        if(nums[i] == 0){
            totalZero++;
        }
        if(nums[i]==1){
            totalOne++;
        }
    }
    // Step2: Fill Zeros
    fill(arr.begin(),arr.begin()+ totalZero,0);
    // Step3:Fill ones
    fill(arr.begin()+ totalZero,arr.end(),1);
    // return ans
    return arr;
}

int main() {
    vector<int> nums = {1,0,0,1,1,0,1};

    vector<int> sorted = sortArray(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

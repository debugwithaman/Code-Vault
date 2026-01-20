#include <iostream>
#include <vector>
#include <climits>  // for INT_MAX
using namespace std;

int findMinimum(vector<int>& arr) {
    int size = arr.size();
    int mini = INT_MAX;

    for (int i = 0; i < size; i++) {
        mini = min(mini, arr[i]);
    }

    return mini;
}

int main() {
    vector<int> arr = {12, 45, 7, 89, 34};

    int minimum = findMinimum(arr);

    cout << "Minimum element in the array: " << minimum << endl;

    return 0;
}

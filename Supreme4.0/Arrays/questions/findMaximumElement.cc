#include <iostream>
#include <vector>
#include <climits>  // for INT_MIN
using namespace std;

int findMaximum(vector<int>& arr) {
    int size = arr.size();
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++) {
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

int main() {
    vector<int> arr = {12, 45, 7, 89, 34};

    int maximum = findMaximum(arr);

    cout << "Maximum element in the array: " << maximum << endl;

    return 0;
}

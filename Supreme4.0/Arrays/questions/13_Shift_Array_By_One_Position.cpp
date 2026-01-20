#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> shiftRight(const vector<int>& arr){
    int n = arr.size();
    vector<int> arr2 = arr;
    int lastElement = arr2[n - 1];

    for (int i = n - 1; i >= 0; i--) {
        if (i != 0) {
            arr2[i] = arr2[i - 1];
        } else {
            arr2[0] = lastElement;
        }
    }

    return arr2;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> shiftedArr = shiftRight(arr);

    cout << "Shifted array: ";
    for (int val : shiftedArr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

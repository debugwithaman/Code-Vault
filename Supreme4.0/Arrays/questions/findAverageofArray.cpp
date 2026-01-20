#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int> &arr) {
    double ans = 0;
    double totalSum = 0;
    double size = arr.size();

    for (int i = 0; i < size; i++) {
        int value = arr[i];
        totalSum = totalSum + value;
    }

    ans = (totalSum * 1.0) / size; 
    
    return ans; // Return the computed average
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    double average = findAverage(arr);

    cout << "Average of the array elements: " << average << endl;

    return 0;
}

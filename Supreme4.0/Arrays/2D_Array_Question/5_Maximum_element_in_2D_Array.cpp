#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;

int getMaxfrom2DArray(int arr[][2], int n, int m) {
    int maxi = INT_MIN;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            maxi = max(maxi, arr[row][col]);
        }
    }
    return maxi;
}

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    cout << getMaxfrom2DArray(arr, 3, 2);
    return 0;
}

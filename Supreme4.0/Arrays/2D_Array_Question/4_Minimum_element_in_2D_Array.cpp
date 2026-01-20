#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;

int getMinfrom2DArray(int arr[][2], int n, int m) {
    int mini = INT_MAX;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            mini = min(mini, arr[row][col]);
        }
    }
    return mini;
}

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    cout << getMinfrom2DArray(arr, 3, 2);
    return 0;
}

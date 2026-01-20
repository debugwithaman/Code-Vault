#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to calculate the diagonal sum
int diagonalSum(vector<vector<int>> &mat) {
    // here arr name is written as mat 
    // Step 1: d1 sum
    int sum = 0;

    // the both row and col line ka koi use nahi hai bus samaj ne ke liye hai like how to use row and col mostly used when the matrix is odd
    // int row = mat.size(); 
    // int col = mat[0].size();

    int n = mat.size();  // assuming it's a square matrix

    // First diagonal (top-left to bottom-right)
    for (int i = 0; i < n; i++) {
        sum = sum + mat[i][i];
    }

    // Step 2: d2 sum (top-right to bottom-left)
    for (int i = 0; i < n; i++) {
        sum = sum + mat[i][n - i - 1];
    }

    // Step 3: remove duplicate elements if needed
    if (n & 1) {
        // if n is odd, middle element was added twice
        sum = sum - mat[n / 2][n / 2];
    }

    // Step 4: Return sum
    return sum;
}

int main() {
    // Example square matrix
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the function and print the result
    int result = diagonalSum(mat);
    cout << "Diagonal Sum: " << result << endl;

    return 0;
}

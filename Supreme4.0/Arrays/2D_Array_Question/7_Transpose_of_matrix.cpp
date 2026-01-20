#include <iostream>  // for input-output (cout, cin)
#include <vector>  // for using vector (dynamic array)
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rowsInOriginalArray = matrix.size();
    int colsInOriginalArray = matrix[0].size();

    //    transpose -> rows get converted into columns
    // Columns get converted into rows 

    int rowOfTransposeMatrix = colsInOriginalArray;
    int colsOfTransposeMatrix = rowsInOriginalArray;

    vector<vector<int>> transpose(rowOfTransposeMatrix, vector<int>(colsOfTransposeMatrix, 0));

    // logic -> i,j -> j , i
    for (int i = 0; i < rowOfTransposeMatrix; i++) {
        for (int j = 0; j < colsOfTransposeMatrix; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    return transpose;
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Function call
    vector<vector<int>> result = transpose(matrix);

    // Print transpose
    cout << "Transpose of matrix:" << endl;
    for (auto row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

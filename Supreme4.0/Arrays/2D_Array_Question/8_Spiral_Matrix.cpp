#include <iostream>  // for input-output (cout, cin)
#include <vector>    // for using vector (dynamic array)
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
   int startingRow = 0;
   int startingCol = 0;

   int n= matrix.size();
   int m = matrix[0].size();

   int endingRow = n-1;
   int endingCol = m-1;

   vector<int> ans;

  //  logic -> loop -> if there are any pending elemenst to print 
  // if yes, -> 4 steps -> startingRow print, endingCol print , endingRow print , startingCol print

  // the while conditions tells wheather a pending row or col is there or not 
  while( startingRow<=endingRow && startingCol<=endingCol){
    // startingRow print
    if(startingRow<=endingRow){
      for(int col = startingCol;col<=endingCol;col++){
        ans.push_back(matrix[startingRow][col]);
      }
      startingRow++;
    }

    // endingCol print
    if(startingCol<=endingCol){
      for(int row = startingRow;row<=endingRow;row++){
        ans.push_back(matrix[row][endingCol]);
      }
      endingCol--;
    }

    //  endingRow print
    if(startingRow<=endingRow){
      // there is still some valid row to print
      for(int col = endingCol;col>=startingCol;col--){
        ans.push_back(matrix[endingRow][col]);
      }
      endingRow--;
    }

    // startingCol print
    if(startingCol<=endingCol){
      // there is still some valid column to print
      // startingCol print
      for(int row = endingRow;row>=startingRow;row--){
        ans.push_back(matrix[row][startingCol]);
      }
      startingCol++;
    }
  }
  return ans;
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    // Call the spiralOrder function
    vector<int> result = spiralOrder(matrix);

    // Print the spiral order
    cout << "Spiral Order: ";
    for(int val : result){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(const vector<int>& arr) {
  // Always remember first create a copy vector of the required answer

  // create a copy :
  vector<int> num = arr;

  int n = num.size();

  int i = 0;
  int j = n - 1;

  while (i <= j) {
    swap(num[i], num[j]); // this is an inbuilt function of vector stl;
    i++;
    j--;
  }

  return num;
}

// Optional: A main function to test the reverseArray function
int main() {
  vector<int> input = {1, 2, 3, 4, 5};
  vector<int> reversed = reverseArray(input);

  for (int val : reversed) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}

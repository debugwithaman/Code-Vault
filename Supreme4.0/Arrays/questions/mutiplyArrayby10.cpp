#include <iostream>
#include <vector>
using namespace std;

vector<int> multiplyBYten(const vector<int>& arr) {
  // we cant use the below code it is not valid as you need to change / remove const from parameter

  // int size = arr.size();

  // for(int i = 0; i<size;i++){
  //   arr[i] = arr[i] * 10;
  // }
  // return arr;

  // We are using this where we are creting a copy arr;

  
    vector<int> arrCopy = arr;
    int size = arrCopy.size();

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arrCopy[i] * 10;
    }

    return arrCopy;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> result = multiplyBYten(arr);

    cout << "Array after multiplying by 10: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

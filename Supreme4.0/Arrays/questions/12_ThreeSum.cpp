#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
  int n= nums.size();
  vector<vector<int>> ans;

  // do sort :

  sort(nums.begin(),nums.end());

  
        for(int i = 0;i<n;i++){
          if(i>0 && nums[i] == nums[i-1]){
            // iss case me triplet check hi mat karo
            // agge baad jao
            // current iteration skip kardo
              continue;
          }
            for(int j = i+1;j<n;j++){
              if(j>i+1 && nums[j] == nums[j-1]){
            // iss case me triplet check hi mat karo
            // agge baad jao
            // current iteration skip kardo
              continue;
          }
                for(int k = i+2;k<n;k++){
                  if(k>j+1 && nums[k] == nums[k-1]){
            // iss case me triplet check hi mat karo
            // agge baad jao
            // current iteration skip kardo
              continue;
          }
                    int first = nums[i];
                    int second = nums[j];
                    int third = nums[k];
                    
                    int sum = first + second + third;

                    if(sum == 0){
                        // Answer Store:

                        vector<int> temp;
                        temp.push_back(first);
                        temp.push_back(second);
                        temp.push_back(third);
                        ans.push_back(temp);
                    }
                }
            }
        }
        return ans;
}

// Downward code is from chatgpt:


//--------------------------------------------------------------
// Nicely print the resulting triplets
//--------------------------------------------------------------
void printTriplets(const vector<vector<int>>& triplets) {
    if (triplets.empty()) {
        cout << "No triplets sum to 0.\n";
        return;
    }
    cout << "Triplets that sum to 0:\n";
    for (const auto& t : triplets) {
        cout << '(' << t[0] << ", " << t[1] << ", " << t[2] << ")\n";
    }
}

//--------------------------------------------------------------
// 🚀  ENTRY POINT
//--------------------------------------------------------------
int main() {
    cout << "Enter number of elements: ";
    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int &x : nums) cin >> x;

    vector<vector<int>> result = threeSum(nums);
    printTriplets(result);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
  if (nums.empty())
    return 0;
  int index = 1;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] != nums[i - 1]) {
      nums[index++] = nums[i];
    }
  }
  return index;
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int uniqueCount = removeDuplicates(nums);
  cout << uniqueCount << endl;
  return 0;
}

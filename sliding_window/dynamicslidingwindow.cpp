#include <iostream>
#include <vector>
using namespace std;
int longestSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int left = 0;
    int sum = 0;
    int maxLen = 0;
    for(int right = 0; right < n; right++) {
      // expand window
        sum += arr[right];  
      // shrink window
        while(sum > k) {    
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
int main() {
    vector<int> arr = {1, 2, 1, 0, 1, 1, 0};
    int k = 4;
    cout << longestSubarray(arr, k);
}

#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int>& arr) {
    int maxi = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main() {
    vector<int> arr = {3, 7, 2, 9, 5};
    cout << findMax(arr);
}

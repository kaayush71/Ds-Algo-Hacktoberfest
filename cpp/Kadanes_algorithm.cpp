//Implementation of Kadane's algorithm to find maximum sum of a continuous sub-array of a given array. 

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int n) {
    int sum = 0, best = 0;
    for (int i=0; i<n; i++) {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }
    return best;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cout << "\nEnter element: ";
        cin >> arr[i];
    }

    cout << "Length of Subarray with max sum: "<< maxSubArray(arr, n);
    return 0;
}

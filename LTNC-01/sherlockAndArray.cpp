#include <bits/stdc++.h>
string balancedSums(vector<int> arr) {
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int sumLeft = arr[left];
    int sumRight = arr[right];
    while (left < right) {
        if (sumLeft <= sumRight) {
            left++;
            sumLeft += arr[left];
        }
        else {
            right--;
            sumRight += arr[right];
        }
    }
    if (sumLeft == sumRight) {
        return "YES";
    }
    return "NO";

}
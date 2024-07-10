#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};

    int n = arr.size();
    int maxi = 0; // Initialize maxi to 0 to find maximum length of subarray with sum 0
    int sum;
    
    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                int len = j - i + 1;
                maxi = max(maxi, len);
            }
        }
    }

    cout << "Length of the longest subarray with sum 0: " << maxi << endl;

    return 0;
}

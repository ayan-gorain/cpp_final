#include <iostream>
using namespace std;

void printAllSubarrays(int arr[], int n) {
    // Loop for the starting point
    for (int i = 0; i < n; i++) {
        // Loop for the ending point
        for (int j = i; j < n; j++) {
            // Print the subarray between i and j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    printAllSubarrays(arr, n);

    return 0;
}

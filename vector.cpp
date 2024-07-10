#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize a vector with some values
    vector<int> arr = {2, 3, 4, 5, 4, 32, 2, 3};
    // Create another vector of the same size as arr, initialized with zeros
    vector<int> arr1(arr.size(), 0);
    arr.push_back(10);
    arr.push_back(00);

    // Print elements of arr
    for(int i = 0; i < arr.size(); i++) {
        
        cout << arr[i] << " ";
    }
    cout << endl;

    // // Optionally, print elements of arr1
    // for(int i = 0; i < arr1.size(); i++) {
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;

    return 0;
}

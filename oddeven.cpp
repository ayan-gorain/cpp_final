#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{12, 22, 31, 17, 46, 54, 15, 19};
    vector<int> arr1{17, 26, 9, 5, 35};
    int n = arr.size();

    // Create a new vector to store the even numbers
    vector<int> evenNumbers;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]);
        }
        else{
            evenNumbers.push_back(arr[i]);
        }
    }

    

    // Print the even numbers
    for(int i = 0; i < evenNumbers.size(); i++) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

   

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> arr{12, 22, 31, 17, 46, 54, 15, 19,16,18,20,24};
vector<int> arr1{17, 26, 9, 5, 35};
int p1 = 0 , p2 = arr.size()-1;

while(p1<p2){
    while((arr[p1] %2 == 0 || arr[p2] % 2 != 0) ) {
        if(arr[p1] % 2 == 0) p1++;
        if(arr[p2] %2  != 0) p2--;
    }

    

    

    swap(arr[p1] , arr[p2]); 
    
    
    p1++;
    p2--;
}
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

  return 0;
}
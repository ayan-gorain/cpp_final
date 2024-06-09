#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {


    int arr[]={1,2,4};
    
    int n=sizeof(arr)/sizeof(int);
      int number = 0;  // Initialize result variable

    for (int i = 0; i < n; ++i) {
        number = number * 10 + arr[i];  // Shift digits left and add the current digit
    }

   cout<<number;

   int sum=number+1;

   cout<<sum;


  return 0;
}
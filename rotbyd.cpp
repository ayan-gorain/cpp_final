#include<bits/stdc++.h>

using namespace std;


int main(){
    int arr[]={1,2,3,4,5,6,7};
  
    int k=2;
     int temp[k];
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<k;i++){
        temp[i]=arr[i];

    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];

    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    
}
 void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k is greater than n
    reverse(nums.begin(), nums.end()); // Reverse the entire array
    reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
    reverse(nums.begin() + k, nums.end()); // Reverse the remaining elements
    }
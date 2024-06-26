#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

   int nums []= {4,5,0,-2,-3,1};
   int n=sizeof(nums)/sizeof(int);
   int  k = 5;
   int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++){
            
            for(int j=i;j<n;j++){
                sum+=nums[j];
                
            }

        }
        unordered_map<int,int> mpp;
        for(int l=0;l<n;l++){
            mpp[sum]++;
        }

        cout<< mpp;
        

  return 0;
}
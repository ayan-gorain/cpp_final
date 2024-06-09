#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
     int A[] = {10, 5, 2, 7, 1, 9};
      int N=sizeof(A)/sizeof(int);
      int K = 15;
      int left =0;
      int right =0;
      long long sum=A[0];
      int maxLen=0;
      while(right<N){
        while(left <=right && sum>K){
            sum-=A[left];
            left++;
            
        }
        if(sum ==K){
            maxLen=max(maxLen,right-left +1);
        }
        right++;
        if(right < N){
            sum+=A[right];
        }


    }
    cout<<maxLen;




  return 0;
}
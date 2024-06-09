#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() { 
     int A[] = {10, 5, 2, 7, 1, 9};
      int N=sizeof(A)/sizeof(int);
      int K = 0;
      int left =0;
      int right =0;
      long long sum=A[0];
      int count=0;
      while(right<N){
        while(left <=right && sum>K){
            sum-=A[left];
            left++;
            
        }
        if(sum ==K){
            count++;
        }
        right++;
        if(right < N){
            sum+=A[right];
        }


    }
    cout<<count;




  return 0;
}
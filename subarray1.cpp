#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
      int A[] = {10, 5, 2, 7, 1, 9};
      int N=sizeof(A)/sizeof(int);
      int K = 15;
      map<int, int> PresumMap;
        int sum=0;
        int maxLen=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                maxLen=max(maxLen,i+1);
                
                
            }
            int rem=sum-K;
            if(PresumMap.find(rem) != PresumMap.end()){
                int len=i-PresumMap[rem];
                maxLen=max(maxLen,len);
                
            }
           if(PresumMap.find(sum)==PresumMap.end()){
               PresumMap[sum]=i;
               
           }
            
        }
        cout << maxLen;


  return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

      int nums []= {3,2,3,3,4,5,6,3,3,3};
      int n=sizeof(nums)/sizeof(int);

        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        

        int maxfreqele=0;
        int maxfre=0;

        for(auto &it : mpp){
            if(it.second>maxfre or( it.second==maxfre and it.first <maxfreqele)){
                maxfre=it.second;
                maxfreqele=it.first;

            }
        }
        cout<<maxfre<<endl;
        cout<<maxfreqele;


        if(maxfre>(n/2)){
            cout<<"yes";

        }
        else{
            cout<<"no";
        }

  return 0;
}
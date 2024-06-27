#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> mpp={0,1,2,2,3,0,4,2};
    vector<int> myvector;

    int k=2;
    for(auto i:mpp){
        if(mpp[i]!=k){
            mpp.erase (mpp[i]);
        }
    }

    for(auto j:mpp){
        cout<<myvector[j];
    }

  return 0;
}
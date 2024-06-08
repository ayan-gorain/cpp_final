#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(n);

    int temp[n];
    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<endl;
    }
    






  return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr1[] = {1, 2, 3, 4, 5} ;
     int n = 5;

   int arr2 [] = {1, 2, 3, 6, 7};
   int m = 5;


   set<int> st;

   for (int i = 0; i < n; i++)
   {
    st.insert(arr1[i]);
    st.insert(arr2[i]);
   } 
   for (auto it=st.begin();it != st.end(); ++it)
   {
    cout<<(*it)<<endl;
   }
   



  return 0;
}
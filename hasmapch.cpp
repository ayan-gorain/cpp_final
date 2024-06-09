#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// for smaller character we take 26
int main() {
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;

    }
     

  return 0;
}

// for every character we take 256

 int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;

    }
     
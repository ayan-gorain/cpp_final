#include<bits/stdc++.h>
using namespace std;

int main(){
    string temp="the sky is blue";

    string ans=" ";

    for(int i=0;i<temp.length();i++){
        if(!isspace(temp[i])){
            cout<<temp[i];
        }
    }
}
#include<bits/stdc++.h>
using namespace std;


char lowercasee(char ch){
    if(ch >='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }

}
bool checkPali(char a[],int n){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        if(lowercasee(a[s])!=lowercasee(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;
    
}

int getlen(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0'; i++){
        count++;
    }
    return count;

}

int main(){

    char ch[20];
    cin>>ch;

    int k=getlen(ch);
    cout<<checkPali(ch,k);
    return 0;


}
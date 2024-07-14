#include<bits/stdc++.h>
using namespace std;

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}
bool checkPali(char a[],int n){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
    
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
    int arr[5]={3,4,2,1,4};

   // ch[2] ='\0' ;

    cout<< ch<<endl;
    int k=getlen(ch);

    cout<<k<<endl;
   reverse(ch,k);
    cout<< ch <<endl;

    cout<<checkPali(ch,k);

    

    return 0;
}

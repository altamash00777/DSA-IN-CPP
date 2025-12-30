#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,2,1};
int size=sizeof(arr)/sizeof(arr[0]);

bool ispalindrome=true;
int i=0,j=size-1;
while(i<j){
    if(arr[i]!=arr[j]){
        ispalindrome=false;
        break;
    }
    i++;
    j--;
}
if(ispalindrome){
    cout<<"palindrome";
}else{
    cout<<"not palindrome";
}


    return 0;
}
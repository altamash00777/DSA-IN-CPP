#include<iostream>
using namespace std;

int main(){

// Given a binary array, find the maximum number of consecutive 1s.

// Example: [1,1,0,1,1,1] → Output: 3

int arr[]={1,1,0,1,1,1};
int size=sizeof(arr)/sizeof(arr[0]);

int count=0,maxcount=0;

for(int i=0;i<size;i++){
    if(arr[i]==1){
        count++;
    }else if(arr[i]==0){
        count=0;
    }
    maxcount=max(maxcount,count);
}
cout<<maxcount;



    return 0;
}
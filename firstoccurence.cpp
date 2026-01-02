// Find the first occurrence of an element
// Return the index of the first time a number appears.

// arr = {1, 3, 5, 3, 9}
// key = 3
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,3,5,3,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    int key=4;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<i<<" ";
            return 0;
        }
        
    }
    cout<<-1;
    return 0;
    
 }
    
      
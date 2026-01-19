// Input:  [3, 7, 2, 9, 4]
// Output: 9
// 👉 Task: Write a C++ program to
//  find the maximum element.

#include<iostream>
using namespace std;

int main(){

    int arr[]={3,7,2,9,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
cout<<max;

    return 0;
}

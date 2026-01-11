// Given an array of nums of n integers.
//  Every integer in the array appears twice except one integer. 
//  Find the number that appeared once in the array.

// Example 1
// Input : nums = [1, 2, 2, 4, 3, 1, 4]
// Output : 3
// Explanation : The integer 3 has appeared only once.

#include<iostream>

using namespace std;

int main(){

    int arr[]={1,2,2,4,3,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size;i++){
    int count=0;
    for(int j=0;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }if(count==1){
        cout<<arr[i];
        return 0;
    }
}

    return 0;
}
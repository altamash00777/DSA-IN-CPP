// The majority element of an array is an element
// that appears more than n/2 times in the array.
//The array is guaranteed to have a majority element.

// Example 1
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
// Output: 7
// Explanation:
// The number 7 appears 5 times in the 9 sized array

#include<iostream>
using namespace std;

int main(){
    int arr[]={7,0,0,1,7,7,2,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(size/2)){
            cout<<arr[i];
            return 0;
        }
    }











    return 0;
}
// Input:
// n = 5
// arr = {1, 2, 4, 5}

// Output:
// 3
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int n=5;
    int sumofn=n*(n+1)/2; //sumofarray element;
    
     int sum=0;
    for(int i=0;i<size;i++){
       sum=sum+arr[i];
    }
    
    cout<<sumofn-sum;      //sum of n natural no then minus the sum of element
                      

    return 0;
}
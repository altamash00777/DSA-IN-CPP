#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,5,7,8,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    int sum=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
        sum=sum+arr[i];        
        }
    }
    cout<<sum;

    return 0;
}

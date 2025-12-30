#include<iostream>
using namespace std;

int main(){

    int arr[]={1,6,3,9,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    int i=0,j=size-1,temp;
    while(i<j){
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;

    i++;
    j--;

    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }



    return 0;
}
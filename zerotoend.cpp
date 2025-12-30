#include<iostream>
using namespace std;

int main(){

    int arr[]={1,0,3,0,4,2,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    int temp,j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            temp=arr[i];       //swapping if i is not zero and incrementing j
            arr[i]=arr[j];
            arr[j]=temp;   
            j++;            
        }
    }
       
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}



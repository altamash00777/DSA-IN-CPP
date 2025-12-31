#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,2,3,3,4,5,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    int j=0;
    for(int i=1;i<size;i++){
        if(arr[i]!=arr[j]){    //if array element not same
            j++;               //then j increment  
            arr[j]=arr[i];     
        }
    }
    for(int i=0;i<=j;i++){     //this will print till j means only distinct element
        cout<<arr[i]<<" ";
    }








    return 0;

}
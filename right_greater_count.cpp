// arr = {5, 2, 6, 1}
// Output
// 1 1 0 0

#include<iostream>
using namespace std;

int main(){
 
    int arr[]={5,2,6,1};
    int size=sizeof(arr)/sizeof(arr[0]);

  int brr[size];

for(int i=0;i<size;i++){
    int count=0;
    for(int j=i+1;j<size;j++){
        if(arr[j]>arr[i]){
        count++;
        }
    }
brr[i]=count;    
}

for(int i=0;i<size;i++){
    cout<<brr[i]<<" ";
}

    return 0;
}

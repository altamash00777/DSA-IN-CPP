#include<iostream>
using namespace std;


int main(){

int arr[]={2,4,7,8,9};
int size = sizeof(arr) / sizeof(arr[0]);

for(int i=0;i<size;i++){
    if(arr[i]%2!=0 && i%2==0){
        cout<<arr[i];
       return 0;
     }
}
cout<<-1;
    return 0;
}
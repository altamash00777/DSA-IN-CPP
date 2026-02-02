#include<iostream>
#include<map>
using namespace std;

int main(){
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
// Output: 7
// Explanation:
// The number 7 appears 5 times in the 9 sized array
map<int,int> hash;


int arr[]={7,0,0,1,7,7,2,7,7};
int size=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size;i++){
    hash[arr[i]]++;
}
for(auto val:hash){
    if(val.second > size/2){
        cout<<val.first;
        return 0;
    }
}
    return 0;
}
#include<iostream>
#include<set>

using namespace std;

int main(){


// Input:n = 5,m = 6 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5,6}
// Output: {1,2,3,4,5,6}

set<int> s;

int arr[]={1,2,3,4,5};
int brr[]={2,3,4,4,5,6};

int n=5,m=6;

for(int i=0;i<n;i++){
  s.insert(arr[i]);
}
for(int i=0;i<m;i++){
  s.insert(brr[i]);
}

for(int val:s){
    cout<<val<<" ";
}









    return 0;
}
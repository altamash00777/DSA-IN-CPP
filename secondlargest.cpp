// Example 1
// Input: nums = [8, 8, 7, 6, 5]
// Output: 7
// Explanation:
// The largest value in nums is 8, the second largest is 7

#include<iostream>
using namespace std;

int main(){

    int nums[]={8,8,7,6,5};
    int size=sizeof(nums)/sizeof(nums[0]);

int max=nums[0];
int secondlargest=-1;
for(int i=0;i<size;i++){
    if(nums[i]>max){
        max=nums[i];
    }
}
for(int i=0;i<size;i++){
    if(nums[i]>secondlargest && nums[i]!=max){
        secondlargest=nums[i];
    }
}
cout<<secondlargest;




    return 0;
}







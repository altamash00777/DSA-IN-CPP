
//better approach for marking matrix to 0
//first we assign rows,col of same size as matrix
//then we traverse the matrix and check condition
//if any element is 0 make row and col as 1
//then in second loop we assign 0 to rows and col as 0
#include<iostream>
using namespace std;

int main(){


int arr[3][3]={
    {1,1,1},
    {1,0,1},
    {1,1,1}
};

int m=3,n=3;
int row[m]={0},col[n]={0};

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(row[i]||col[j]){
            arr[i][j]=0;
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
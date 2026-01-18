#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,0,2,1,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    int c = 0, j = 0, z = size - 1;

    for(int i=0;i<size;i++){             
    if(arr[c] == 0) {
      swap(arr[c], arr[j]);
        c++;
        j++;    
    } else if(arr[c] == 1) {
            c++;
        } else { 
            swap(arr[c], arr[z]);
            z--;
        
        }
    }

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
return 0;
    }


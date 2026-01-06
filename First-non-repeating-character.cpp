// Input: s = "aabbcdde"
// Output: c

// Explanation:
// - Frequencies: a→2, b→2, c→1, d→2, e→1
// - First non-repeating character: c
#include<iostream>
#include<string.h>

using namespace std;

int main(){

string s="aabbcdde";
int freq[26]={0};

for(char c:s){
    freq[c-'a']++;
}
for(int i=0;i<26;i++){
    if(freq[i]==1){
        cout<<char(i+'a');
    return 0;
    }
}
    

cout<<-1;
    return 0;
}
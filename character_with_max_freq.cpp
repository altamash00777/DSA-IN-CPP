// Input: s = "aaabbc"
// Output: a 3
// Explanation:
// Frequencies: a→3, b→2, c→1
// Maximum frequency → 3 → character 'a'

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string s="aaabbc";
int freq[26]={0};
  
 for(char c:s){
    freq[c-'a']++;
 }
int maxfreq=0;
char ch;

for(int i=0;i<26;i++){
    if(freq[i]>maxfreq){
        maxfreq=freq[i];  
        ch=char(i+'a');
    }
}
cout<<maxfreq<<" "<<ch;




    return 0;
}
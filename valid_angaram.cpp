#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string s="listen";
    string t="silent";

    int fres[26]={0};
    int fret[26]={0};
    
    if(s.length()!=t.length()){
        cout<<"not angaram";
        return 0;
    }

    for(int i=0;i<s.length();i++){
        char c=s[i];
        fres[c-'a']++;
    }
    for(int i=0;i<t.length();i++){
        char c=t[i];
        fret[c-'a']++;
    }
    
    for(int i=0;i<26;i++){
        if(fres[i]!=fret[i]){
            cout<<"not angaram";
            return 0;
        }
    }
 cout<<"angaram";



    return 0;
}
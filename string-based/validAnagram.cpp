#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="anagram";
    string t="nagaram";

    if(s.size()!=t.size()){
        cout<<"false";
        return 0;
    }
    int freq[26]={0};
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
        
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
}

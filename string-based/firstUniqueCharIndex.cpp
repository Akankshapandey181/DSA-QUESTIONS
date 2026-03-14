#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "leetcode";
    int freq[26]={0};
    for(char c:s){
        freq[c-'a']++;
    }
    for(int i=0;i<s.size();i++){
        if(freq[s[i]-'a']==1){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}





    
